/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:53:54 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 20:00:06 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<Date, float> BitcoinExchange::coins;

#pragma region Canonical
BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
	(void)obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	(void)obj;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}
#pragma endregion Canonical

static bool	isHeader(std::string input)
{
	std::string header = "date | value";
	if (input == header)
		return true;
	return false;
}

static std::string trim(const std::string& str)
{
	size_t first = str.find_first_not_of(' ');
	if (std::string::npos == first)
		return str;
	size_t last = str.find_last_not_of(' ');
	return str.substr(first, (last - first + 1));
}

static bool checkLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	return (false);
}

static float	convertStringToFloat(const std::string& inputString)
{
	std::istringstream inputStream(inputString);
	float floatValue;
	inputStream >> floatValue;
	return floatValue;
}

static bool	check_value_is_valid(const std::string& inputValue)
{
	int decimalPointCount = 0;
	
	for (size_t i = 0; i < inputValue.length(); i++)
	{
		if (i == 0 && inputValue[i] == '+')
			continue ;
		if (inputValue[i] == '.' || inputValue[i] == '0')
		{
			inputValue[i] == '.' ? decimalPointCount++ : decimalPointCount;
			if (decimalPointCount > 1 || (decimalPointCount && inputValue.length() == 1))
				return (std::cout << "Error: invalid value" << std::endl, false);
			continue ;
		}
		if (i == 0 && inputValue[i] == '-')
			return (std::cout << "Error: not a positive number" << std::endl, false);
		if (!std::isdigit(inputValue[i]) && inputValue[0] != '-')
			return (std::cout << "Error: invalid value" << std::endl, false);
	}
	float numericValue = convertStringToFloat(inputValue);
	if (numericValue > 1000)
		return (std::cout << "Error: too large a number" << std::endl, false);
	if (numericValue < 0)
		return (std::cout << "Error: not a positive number" << std::endl, false);
	return true;
}

static int convertStringToInt(const std::string& str)
{
	std::istringstream iss(str);
	int result;
	iss >> result;
	return result;
}

bool	isValidDate(const std::string& year, const std::string& month, const std::string& day)
{
	if (day.length() > 2 || month.length() > 2 || year.length() != 4)
		return (std::cout << "Error: invalid date" << std::endl, false);
	if (convertStringToInt(year) < 2005 || convertStringToInt(year) > 2024)
		return (std::cout << "Error: invalid year" << std::endl, false);
	if (convertStringToInt(month) < 1 || convertStringToInt(month) > 12)
		return (std::cout << "Error: invalid month" << std::endl, false);
	if (convertStringToInt(day) < 1 || convertStringToInt(day) > 31)
		return (std::cout << "Error: invalid day" << std::endl, false);
	if (checkLeapYear(convertStringToInt(year)) 
		&& convertStringToInt(month) == 2
			&& convertStringToInt(day) > 29)
		return (std::cout << "Error: invalid day" << std::endl, false);
	if (!checkLeapYear(convertStringToInt(year)) 
		&& convertStringToInt(month) == 2 
			&& convertStringToInt(day) > 28)
		return (std::cout << "Error: invalid day" << std::endl, false);
	return true;
}


void BitcoinExchange::insertBitcoinRecord(const std::string& yearStr, const std::string& monthStr, const std::string& dayStr, const std::string& valueStr)
{
    int day = convertStringToInt(dayStr);
    int month = convertStringToInt(monthStr);
    int year = convertStringToInt(yearStr);
    float value = convertStringToFloat(valueStr);

    BitcoinExchange::coins.insert(std::make_pair(Date(day, month, year), value));
}


std::vector<std::string> splitString(const std::string& inputString, char delimiter)
{
	std::vector<std::string> resultTokens;
	std::string currentToken;
	std::istringstream inputStream(inputString);
	while (std::getline(inputStream, currentToken, delimiter))
		resultTokens.push_back(currentToken);
	return resultTokens;
}

void BitcoinExchange::processExchange(std::vector<std::string> dateParts, std::string amount)
{
	std::string dayStr = trim(dateParts[2]);
    std::string monthStr = trim(dateParts[1]);
    std::string yearStr = trim(dateParts[0]);

	
	Date searchDate(convertStringToInt(dayStr), convertStringToInt(monthStr), convertStringToInt(yearStr));
	std::map<Date, float>::iterator iterator = coins.lower_bound(searchDate);
	if (iterator != coins.end() && iterator->first != searchDate && iterator == coins.begin()) {
		std::cout << "No data available for the provided date or earlier." << std::endl;
		return ;
	}
	else if (iterator != coins.begin() && iterator != coins.end() && iterator->first != searchDate) {
		--iterator;
	}
	double result;
	if (iterator != coins.end())
	{
		result = iterator->second * convertStringToFloat(amount);
		std::cout <<yearStr << "-" << monthStr << "-" << dayStr << " => " << amount << " = " << result << std::endl;
	}
	else {
		std::cout << "No data available for the provided date or earlier." << std::endl;
	}
}

void	BitcoinExchange::processDataFile(const char *filePath)
{
	if (!filePath)
		throw std::invalid_argument("Error: invalid Argument");
	std::ifstream infile(filePath);
	std::string currentLine;

	if (!infile.is_open())
		throw std::invalid_argument("Error: could not open file.");
	std::getline(infile, currentLine);
	for (;std::getline(infile, currentLine);)
	{
		size_t pos = currentLine.find(',');
		if (pos == std::string::npos)
			throw std::invalid_argument("Error: invalid format");
		std::string datePart = currentLine.substr(0, pos);
		std::string valuePart = currentLine.substr(pos + 1, currentLine.length());
		std::vector <std::string> dateComponents = splitString(datePart, '-');
		insertBitcoinRecord(trim(dateComponents[0]), trim(dateComponents[1]), trim(dateComponents[2]), trim(valuePart));
	}
	infile.close();
}

void	BitcoinExchange::processBitcoinExchange(const char* inputFilePath, const char* dataFilePath)
{
	if (!inputFilePath || !dataFilePath)
		throw std::invalid_argument("Error: invalid Argument");
	processDataFile(dataFilePath);
	std::ifstream infile(inputFilePath);
	std::string line;

	if (!infile.is_open())
		throw std::invalid_argument("Error: could not open file.");
	std::getline(infile, line);
	if (line.empty())
		throw std::invalid_argument("Error: Empty file");
	if (!isHeader(line))
		throw std::invalid_argument("Error: invalid header");
	std::string header = "date | value";
	if(!infile.eof())
		std::cout << header << std::endl;
	for (;std::getline(infile, line);)
	{
		if (line.empty())
		{
			std::cout << "Error: invalid line" << std::endl;
			continue ;
		}
		size_t pos = line.find('|');
		if (pos == std::string::npos)
		{
			std::cout << "Error: invalid line(missing `|`)" << std::endl;
			continue ;
		}
		std::string date = line.substr(0, pos);
		std::string value = trim(line.substr(pos + 1, line.length()));
		if (date.empty() || value.empty())
		{
			std::cout << "Error: invalid line" << std::endl;
			continue ;
		}
		if (!check_value_is_valid(value))
			continue ;
		std::vector <std::string> dateSplit = splitString(date, '-'); // split(date, '-');
		if (!isValidDate(trim(dateSplit[0]), trim(dateSplit[1]), trim(dateSplit[2])))
			continue ;
		processExchange(dateSplit, value);
	}
	infile.close();
}


#pragma region Date

void	Date::setDay(int day)
{
	this->day = day;
}

void	Date::setMonth(int month)
{
	this->month = month;
}

void	Date::setYear(int year)
{
	this->year = year;
}

int		Date::getDay() const
{
	return this->day;
}

int		Date::getMonth() const
{
	return this->month;
}

int		Date::getYear() const
{
	return this->year;
}

bool	Date::operator<(const Date& obj) const
{
	if (this->year < obj.year)
		return true;
	else if (this->year == obj.year)
	{
		if (this->month < obj.month)
			return true;
		else if (this->month == obj.month)
		{
			if (this->day < obj.day)
				return true;
		}
	}
	return false;
}

bool Date::operator==(const Date& other) const
{
	return (this->year == other.year && this->month == other.month && this->day == other.day);
}

bool Date::operator!=(const Date& other) const
{
	return !(*this == other);
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date()
{
}

Date::~Date()
{
}
#pragma endregion Date
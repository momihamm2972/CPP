/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:53:57 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 20:01:45 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>

class Date
{
	private:
		int day;
		int month;
		int year;
		Date();
	public:
		Date(int day, int month, int year);
		void	setDay(int day);
		void	setMonth(int month);
		void	setYear(int year);
		int		getDay() const;
		int		getMonth() const;
		int		getYear() const;
		bool	operator<(const Date& obj) const;
		bool	operator!=(const Date& other) const;

    bool operator==(const Date& other) const;
		~Date();
};

class BitcoinExchange
{
	private:
		static std::map<Date, float> coins;
		BitcoinExchange();
	public:
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange& operator=(const BitcoinExchange& obj);
		~BitcoinExchange();
		static void	processDataFile(const char *input);
		static void	processBitcoinExchange(const char* inputFilePath, const char* dataFilePath);
		static void	insertBitcoinRecord(const std::string& year, const std::string& month, const std::string& day, const std::string& value);
		static void	processExchange(std::vector<std::string> date, std::string value);
};
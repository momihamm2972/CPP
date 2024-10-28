/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:14:16 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 21:14:17 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"


int convert_str_to_int(const std::string& str) 
{
    std::stringstream ss(str);
    int num;
    ss >> num;
    return num;
}

void printList(const std::list<int>& items) 
{
    for (std::list<int>::const_iterator it = items.begin(); it != items.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void printVector(const std::vector<int>& items) 
{
    for (std::vector<int>::const_iterator it = items.begin(); it != items.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

double sort_vector(std::vector<int>& numbers) 
{
    clock_t start, end;
    start = clock();
    std::vector<int> sorted = mergeSort(numbers);
    end = clock();
    numbers = sorted;
    return (double)(end - start) / CLOCKS_PER_SEC * 1000000.0;
}

double sort_list(std::list<int>& lst)
{
    clock_t start, end;
    start = clock();
    std::list<int> sorted = mergeSort(lst);
    end = clock();
    lst = sorted;
    return (double)(end - start) / CLOCKS_PER_SEC * 1000000.0;
}


void displayProcessingTime(double vectorDuration, double listDuration, int elementCount)
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Time to process a range of " << elementCount << " elements with std::vector: "
              << vectorDuration << " us" << std::endl;
    std::cout << "Time to process a range of " << elementCount << " elements with std::list: "
              << listDuration << " us" << std::endl;
}

std::vector<int> parseArgumentsToSequence(int argc, char* argv[])
{
    if (argc < 2) {
        throw std::invalid_argument("Error: No numbers provided");
    }
    
    std::vector<int> parsedSequence;
    try {
        for (int i = 1; i < argc; i++) {
            int number = convert_str_to_int(argv[i]);
            if (number < 0)
                throw std::invalid_argument("Negative numbers are not allowed");
            parsedSequence.push_back(number);
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        exit(1);
    }
    return parsedSequence;
}

std::vector<int>::iterator findPosition(std::vector<int>& vec, int value) {
    return std::lower_bound(vec.begin(), vec.end(), value);
}

std::list<int>::iterator findPosition(std::list<int>& lst, int value) {
    std::list<int>::iterator it = lst.begin();
    while (it != lst.end() && *it <= value) {
        ++it;
    }
    return it;
}

std::vector<int> mergeSort(const std::vector<int>& inputVector) {
    if (inputVector.size() <= 1) {
        return inputVector;
    }

    std::vector<int> result;
    std::vector<std::pair<int, int> > pairs;
    size_t i;
    for (i = 0; i + 1 < inputVector.size(); i += 2) {
        if (inputVector[i] < inputVector[i + 1]) {
            pairs.push_back(std::make_pair(inputVector[i], inputVector[i + 1]));
        } else {
            pairs.push_back(std::make_pair(inputVector[i + 1], inputVector[i]));
        }
    }
    int lastElement = -1;
    if (i < inputVector.size()) {
        lastElement = inputVector[i];
    }
    std::vector<int> largerElements;
    for (size_t j = 0; j < pairs.size(); ++j) {
        largerElements.push_back(pairs[j].second);
    }

    if (largerElements.size() > 1) {
        largerElements = mergeSort(largerElements);
    }
    result = largerElements;
    for (size_t j = 0; j < pairs.size(); ++j) {
        std::vector<int>::iterator pos = std::lower_bound(result.begin(), result.end(), pairs[j].first);
        result.insert(pos, pairs[j].first);
    }
    if (lastElement != -1) {
        std::vector<int>::iterator pos = std::lower_bound(result.begin(), result.end(), lastElement);
        result.insert(pos, lastElement);
    }
    return result;
}

std::list<int> mergeSort(const std::list<int>& inputList) {
    if (inputList.size() <= 1) {
        return inputList;
    }

    std::list<int> result;
    std::vector<std::pair<int, int> > pairs;
    std::list<int>::const_iterator it = inputList.begin();
    while (it != inputList.end()) {
        int first = *it++;
        if (it != inputList.end()) {
            int second = *it++;
            pairs.push_back(std::make_pair(
                std::min(first, second),
                std::max(first, second)
            ));
        } else {
            pairs.push_back(std::make_pair(first, first));
        }
    }
    std::list<int> largerElements;
    for (size_t i = 0; i < pairs.size(); ++i) {
        largerElements.push_back(pairs[i].second);
    }

    if (largerElements.size() > 1) {
        largerElements = mergeSort(largerElements);
    }
    result = largerElements;
    for (size_t i = 0; i < pairs.size(); ++i) {
        if (pairs[i].first != pairs[i].second ||  std::count(inputList.begin(), inputList.end(), pairs[i].first) >  std::count(result.begin(), result.end(), pairs[i].first)) {
            std::list<int>::iterator pos = findPosition(result, pairs[i].first);
            result.insert(pos, pairs[i].first);
        }
    }
    return result;
}
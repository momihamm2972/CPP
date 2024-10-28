/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:14:23 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 21:14:24 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <vector>
#include <list>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdexcept>
#include <sstream>

std::vector<int> mergeSort(const std::vector<int>& inputVector);
std::list<int> mergeSort(const std::list<int>& inputList);

int convert_str_to_int(const std::string& str);
double sort_vector(std::vector<int>& numbers);
double sort_list(std::list<int>& lst);
void displayProcessingTime(double vectorDuration, double listDuration, int elementCount);
std::vector<int> parseArgumentsToSequence(int argc, char* argv[]);
void printList(const std::list<int>& items);
void printVector(const std::vector<int>& items);
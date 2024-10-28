/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:13:57 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 21:13:58 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"




int main(int argc, char* argv[]) {
    try {
        std::vector<int> numbers = parseArgumentsToSequence(argc, argv);
        std::cout << "Before: ";
        printVector(numbers);
        std::list<int> mylist(numbers.begin(), numbers.end());
        double duration_vec = sort_vector(numbers);
        double duration_list = sort_list(mylist);
        std::cout << "After (std::vector): ";
        printVector(numbers);
        std::cout << "After (std::list)  : ";
        printList(mylist);
        displayProcessingTime(duration_vec, duration_list, numbers.size());

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
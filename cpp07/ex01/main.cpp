/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:21:34 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 01:36:18 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	std::string t[2] = {"Hello", "world"};

	iter(t, 2, printType<std::string>);
	iter(arr, 5, printType<int>);
	std::cout << "############################" << std::endl;
	printType(arr[0]);
}


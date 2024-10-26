/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:38:08 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:39:20 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::list<int> l;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for (int i = 0; i < 10; i++)
	{
		l.push_back(i);
	}
	std::cout << *easyfinde(v, 5) << std::endl;
	try{
		std::cout << *easyfinde(v, 15) << std::endl;
	}catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
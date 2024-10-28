/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:38:08 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 16:54:31 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> _vec;
	std::list<int> _lis;

	for (int index = 0; index < 10; index++)
	{
		_vec.push_back(index);
	}
	for (int index = 0; index < 10; index++)
	{
		_lis.push_back(index);
	}
	try
	{
		std::cout <<"VECTOR : " <<  *easyfinde(_vec, 5) << std::endl;
		std::cout <<"LIST : " <<  *easyfinde(_lis, 15) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
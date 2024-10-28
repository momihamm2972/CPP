/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:40:44 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 16:59:12 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// 	try
// 	{
// 		{
// 			Span sp = Span(5);
// 			for (unsigned int i = 0; i < sp.getSize(); i++)
// 				sp.addNumber(i);
// 			std::cout << "-->shortestSpan: " << sp.shortestSpan() << std::endl;
// 			std::cout << "-->longestSpan: " << sp.longestSpan() << std::endl;
// 		}
// 		std::cout << "-------------------" << std::endl;
// 		{
// 			Span sp(10000);
// 			srand(time(NULL));
// 			std::vector<int> v(10000);
// 			std::generate(v.begin(), v.end(), rand);
// 			sp.generateNumbers(v.begin(), v.end());
// 			std::cout << "->shortestSpan: " << sp.shortestSpan() << std::endl;
// 			std::cout << "->longestSpan: " << sp.longestSpan() << std::endl;
// 		}
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	return (0);
// }


int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
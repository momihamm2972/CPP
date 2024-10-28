/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:57:42 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 20:11:38 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <vector>

class RPN
{
	private:
		std::string operatorSymbol;
		std::stack<int> _stack;

	public:
		RPN();
		~RPN();
		RPN(const RPN& obj);
		RPN& operator=(const RPN& obj);
		void evaluate(std::string input);
		
};
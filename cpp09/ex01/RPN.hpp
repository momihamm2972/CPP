/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:57:42 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:58:25 by momihamm         ###   ########.fr       */
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
		std::string _expr;
		std::stack<int> _stack;

	public:
		RPN();
		~RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		void rpn(std::string expr);
		
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:25:41 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:26:21 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &rhs);
		Array &operator=(Array const &rhs);
		T &operator[](unsigned int i);
		const T &operator[](unsigned int i) const;
		unsigned int getSize() const;
		~Array();
};

#include "Array.tpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:25:41 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 01:14:16 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename T>
class Array
{
	private:
		T *arr;
		unsigned int size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &obj);
		Array &operator=(Array const &obj);
		T &operator[](unsigned int i); // s
		const T &operator[](unsigned int i) const; // g
		unsigned int getSize() const;
		~Array();
};

#include "Array.tpp"
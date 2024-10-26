/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:25:46 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 17:26:45 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename T>
Array<T>::Array()
{
	this->size = 0;
	this->array = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->size = n;
	this->array = new T[n];
}

template<typename T>
Array<T>::Array(Array const &rhs)
{
	this->size = rhs.size;
	this->array = new T[rhs.size];
	for (unsigned int i = 0; i < rhs.size; i++)
		this->array[i] = rhs.array[i];
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		if (this->array)
			delete[] this->array;
		this->size = rhs.size;
		this->array = new T[rhs.size];
		for (unsigned int i = 0; i < rhs.size; i++)
			this->array[i] = rhs.array[i];
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->size)
		throw std::exception();
	return (this->array[i]);
}

template<typename T>
const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->size)
		throw std::exception();
	return (this->array[i]);
}

template<typename T>
unsigned int Array<T>::getSize() const
{
	return(this->size);
}

template<typename T>
Array<T>::~Array()
{
	if (this->array)
		delete[] this->array;
}
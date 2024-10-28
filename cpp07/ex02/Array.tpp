/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:25:46 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 01:49:47 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template<typename T>
Array<T>::Array()
{
	this->size = 0;
	this->arr = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->size = n;
	this->arr = new T[n];
}

template<typename T>
Array<T>::Array(Array const &obj)
{
	this->size = obj.size;
	this->arr = new T[obj.size];
	for (unsigned int i = 0; i < obj.size; i++)
		this->arr[i] = obj.arr[i];
}

template<typename T>
Array<T> &Array<T>::operator=(Array const &obj)
{
	if (this != &obj)
	{
		if (this->arr)
			delete[] this->arr;
		this->size = obj.size;
		this->arr = new T[obj.size];
		for (unsigned int i = 0; i < obj.size; i++)
			this->arr[i] = obj.arr[i];
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->size)
		throw std::exception();
	return (this->arr[i]);
}

template<typename T>
const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->size)
		throw std::exception();
	return (this->arr[i]);
}

template<typename T>
unsigned int Array<T>::getSize() const
{
	return(this->size);
}

template<typename T>
Array<T>::~Array()
{
	if (this->arr)
		delete[] this->arr;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:24:55 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/26 07:39:30 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base *base = new Base;
	Base *a = new A;
	Base *b = new B;
	Base *c = new C;

	Base *random = generate();

	std::cout << "identify : " << std::endl;
	identify(base);
	identify(a);
	identify(b);
	identify(c);
	std::cout << "identify(Base* p) : " << std::endl;
	identify(random);
	std::cout << "identify(Base& p) : " << std::endl;
	identify(*random);


	delete base;
	delete a;
	delete b;
	delete c;
	delete random;
	return (0);
}
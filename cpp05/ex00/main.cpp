/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:40:44 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 01:14:30 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureau("name", 150);
        bureau.decrementGrade();
        std::cout << bureau << std::endl;
        // ******************************
        std::string h = "je";
        Bureaucrat bur(h, 1);
        bur.incrementGrade();
        std::cout << bur ;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
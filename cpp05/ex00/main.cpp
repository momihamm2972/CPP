/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 08:40:44 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/14 22:34:46 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat jondi("bozbal", 3);
    try
    {
        jondi.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    // std::cout << jondi << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 02:03:53 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/22 03:01:59 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl()
{
    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;
}

void	Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
    enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for\
years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    int indx;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    indx = 0;
    while (indx < 4)
    {
        if (level == levels[indx])
        {
            std::cout << "[ " << level << " ]" << std::endl;
            (this->*ptr[indx])();
            break;
        }
        indx++;
    }
}

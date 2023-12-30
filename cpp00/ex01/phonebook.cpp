/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:49:52 by momihamm          #+#    #+#             */
/*   Updated: 2023/12/30 20:14:12 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    // (void)ac;
    // (void)av;
    while (1)
    {
        std::cout<< "prompt$>";
        std::string in_put;
        std::getline (std::cin, in_put);
        std::cout<< in_put;
        if (in_put == "exit")
        {
            std::cout<< "kmi"<< std::endl;
            return (0);
        }
    }
}
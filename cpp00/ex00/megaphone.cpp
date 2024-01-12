/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:42:16 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/11 21:18:18 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int    main(int ac, char **av)
{
    if(ac >= 2)
    {
        int    indx;
        int    vect;

        vect = 1;
        while (av[vect])
        {
            std::string arg = av[vect];
            indx = 0;
            while (arg[indx])
            {
                std::cout<< (char)toupper(arg[indx]);
                indx++;
            }
            vect++;
        }
        std::cout<< "\n";
    }
    else
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
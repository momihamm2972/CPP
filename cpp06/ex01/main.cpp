/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:10:24 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/25 22:20:29 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data* test = new Data;
    test->lkmaya = "kmi";
    test->num = 91;
    std::cout << "Data in :" << test->lkmaya << " || " << test->num << std::endl;
    // #########################################################
    uintptr_t ptr = Serializer::serialize(test);
    std::cout << "UINTPTR_T :" << ptr << std::endl;
    // #########################################################
    Data* final = Serializer::deserialize(ptr);
    // (void) final;
    std::cout << "Final in :" << final->lkmaya << " || " << final->num << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:39:47 by momihamm          #+#    #+#             */
/*   Updated: 2024/01/20 02:32:26 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_HPP
# define MYSED_HPP

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

std::string	check_name(std::string name);
int	checkIfTher(std::ofstream& outfile, std::string input, std::string acc, std::string rep, int line);
int			my_len(std::string input);

#endif
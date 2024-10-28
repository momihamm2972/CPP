/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:49:20 by momihamm          #+#    #+#             */
/*   Updated: 2024/10/27 17:01:35 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// int main()
// {
//     std::vector<int> myVect;
//     myVect.push_back(5);
//     myVect.push_back(17);
//     std::cout << myVect.back() << std::endl;
//     myVect.pop_back();
//     std::cout << myVect.size() << std::endl;
//     myVect.push_back(3);
//     myVect.push_back(5);
//     myVect.push_back(737);
//     myVect.push_back(0);
//     std::vector<int>::iterator vit = myVect.begin();
//     while(vit != myVect.end())
//     {
//         std::cout << *vit << std::endl;
//         vit++;
//     }
//     return 0;
// }



int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
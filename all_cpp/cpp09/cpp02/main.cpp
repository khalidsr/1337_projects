/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:34:01 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/31 14:48:57 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    PmergeMe pm;
    size_t k;
    if (ac > 1)
    {
        k = 0;
        for (int i = 1; i < ac; i++)
        {
            pm.check_arg(av[i]);
        }
        pm.before_after("Before: ");
        pm.merge_insert(k);
        pm.before_after("After:  ");
        pm.print_time();

        // if (pm.is_sorted())
        //     std::cout << ">>>>> IS sorted <<<<<<" << std::endl;
        // else
        //     std::cout << ">>>>>  IS NOT sorted <<<<<<<" << std::endl;
    }
    else
        std::cout << "Error" << std::endl;

    return (0);
}

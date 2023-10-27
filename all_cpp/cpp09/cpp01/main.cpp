/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:26:37 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/03 16:24:27 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN rpn;
    if (ac == 2)
    {
        rpn.check_arg(av[1]);
        rpn.print_result();
    }
    else
        std::cout<<"Error bad argument"<<std::endl;
    return (0);
}
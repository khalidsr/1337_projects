/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:25:56 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/30 14:13:50 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <limits>

int main(int ac, char **av)
{
    std::ifstream num(av[1]);
    std::ifstream nb("data.csv");
    BitcoinEXchange bitcoin;
    std::string str;

    if (ac == 2 && num)
    {
        std::string ptr = "data.csv";
        if (nb.is_open())
        {
            while (!nb.eof())
            {
                std::getline(nb, ptr);
                bitcoin.fill_map(ptr);
            }
            nb.close();
            while (!num.eof())
            {
                std::getline(num, str);
                bitcoin.check_file(str);
            }
            num.close();
        }
    }
    else
    {
        std::cout << "Error: could not open file." << std::endl;
        exit(1);
    }
    return (0);
}
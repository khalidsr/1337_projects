/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:51:49 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:52:58 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_replace.h"

int main (int ac, char **av)
{
	std::string		s1;
	std::string		s2;
	std::string		str;
	file_replace	instance;

	if(ac == 4)
	{
		str = av[1];
		s1 = av[2];
		s2 = av[3];
		instance.f_replace(str, s1, s2);
	}
	else
		std::cout << "numbers of arguments not valid" <<std::endl;
	return (0);
}
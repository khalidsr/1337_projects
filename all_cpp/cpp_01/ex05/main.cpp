/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:46:02 by sriyani           #+#    #+#             */
/*   Updated: 2022/12/27 12:16:04 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int ac, char **av)
{
	std::string str;
	Harl instance;

	if (ac == 2)
	{
		str = av[1];
		instance.complain(str);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:56:00 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 14:58:28 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	int			i;
	int			k;
	Contact		Contact;
	std::string		str;
	std::string		ptr;

	i = 0;
	k = 0;
	while(1)
	{
		if (std::cin.eof())
			exit(1);
		std::cout << "Enters a command: "<<std::endl;
		std::getline(std::cin, str);
		if (str.compare("ADD") && str.compare("SEARCH") && str.compare("EXIT"))
			std::cout << "COMMAND NOT FOUND"<< std::endl;
		if (!str.compare("EXIT"))
			exit(0);
		if (!str.compare("ADD"))
		{
			phonebook.add( i );
			i++;
			k++;
			if (i == 8)
				i = 0;
		}
		if (!str.compare("SEARCH"))
		{
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			std::cout << "|     index|first name| last name|  nickname|" << std::endl;
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			if (k > i)
				{
					phonebook.search(8);
					phonebook.single_conctact(k);
				}
			else
			{
				phonebook.search(i);
				phonebook.single_conctact(i);
			}
		}
		// if (!str.compare("SEARCH"))
		// 	std::cout<<"SEARCH"<<std::endl;
	}
	return 0;
}
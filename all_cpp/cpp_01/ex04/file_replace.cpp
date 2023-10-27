/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_replace.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:28:16 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 21:08:23 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_replace.h"

file_replace::file_replace(void)
{
	std::cout<<"constructor called"<<std::endl;
}

void file_replace::f_replace(std::string str, std::string s1, std::string s2)
{
	std::ifstream	i_filename;
	std::ofstream	o_freplace;
	std::string		ptr;
	std::string		str2;
	std::size_t		found;

	str2 = str;
	i_filename.open(str);
	str2.append(".replace");
	o_freplace.open(str2);
	if(!i_filename.is_open() || !o_freplace.is_open())
	{
		std::cerr << "can not write in file" << std::endl;
		exit(1);
	}
	while (getline(i_filename, ptr))
	{
		while(1)
		{
			found = ptr.find(s1);
			if (found != std::string::npos)
			{
				ptr.erase(found, s1.length());
				ptr.insert(found,s2);
			}
			else
				break ;
		}
		o_freplace << ptr;
		if (!i_filename.eof())
			o_freplace << std::endl;
	}
	i_filename.close();
	o_freplace.close();

}


file_replace::~file_replace(void)
{
	std::cout<<"destructor called"<<std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:19:53 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/26 10:27:28 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
	std::cout<< "PhoneBook default constructor" <<std::endl;
}

std::string PhoneBook::is_empty()
{
	std::string ptr;
	std::getline(std::cin, ptr);
	if(ptr.empty())
	{
		std::cout<< "You cannot use empty line. try again !!"<< std::endl;
		while(1)
		{
			std::getline(std::cin, ptr);
			if(!ptr.empty())
				break ;
		}
	}
	return ptr;
}

void PhoneBook::aff_contact(std::string str, std::string ptr, std::string s, int j)
{
	std::string var;
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	if (ptr.length() > 10)
	{
		ptr.resize(9);
		ptr.append(".");
	}
	if (s.length() > 10)
	{
		s.resize(9);
		s.append(".");
	}
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout<< j;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout<<str;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout<<ptr;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout<<s;
	std::cout << "|"<<std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}


void	PhoneBook::add(int i)
{
	std::string ptr;

	std::cout<<"Please enter first name : ";
	ptr = is_empty();
	store_contact[i].setfname(ptr);
	std::cout<<"Please enter last name : ";
	ptr = is_empty();
	store_contact[i].setlname(ptr);

	std::cout<<"Please enter nickname : ";
	ptr = is_empty();
	store_contact[i].setniname(ptr);

	std::cout<<"Please enter phone number : ";
	ptr = is_empty();
	store_contact[i].setphone_num(ptr);
	
	std::cout<<"Please enter darkest secret : ";
	ptr = is_empty();
	store_contact[i].setdar_secret(ptr);
}

void PhoneBook::search(int i)
{
	std::string str;
	std::string ptr;
	std::string s;
	for(int j = 0 ; j < i ; j++)
	{
		str = store_contact[j].getfname();
		ptr = store_contact[j].getlname();
		s = store_contact[j].getniname();
		aff_contact(str, ptr, s, j);
	}
}
void	PhoneBook::single_conctact(int i)
{
	std::string str;
	std::string ptr;
	std::string s;
	std::string strr;

	int index = 0;
	while(1)
	{
		std::cout<<"Please enter the index:"<<std::endl;
	
		std::getline(std::cin, strr);
		index = std::atoi(strr.c_str());
		if (index <= (i -1) && (strr[0] >= 48 && strr[0] < 56))
		{
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			str = store_contact[index].getfname();
			ptr = store_contact[index].getlname();
			s = store_contact[index].getniname();
			aff_contact(str, ptr, s, index);
			break;
		}
		else
			std::cout<<" Index not found .Please enter the index:"<<std::endl;
	}
}

PhoneBook::~PhoneBook()
{
	std::cout<< "PhoneBook destructor" <<std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:39:09 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/26 10:10:03 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout<<"The memory address of the str        : "<< &str<<std::endl;
	std::cout<<"The memory address held by stringPTR : "<< stringPTR<<std::endl;
	std::cout<<"The memory address held by stringREF : "<< &stringREF<<std::endl;

	std::cout<<"The value of the string           : "<< str <<std::endl;
	std::cout<<"The value pointed to by stringPTR : "<< *stringPTR<<std::endl;
	std::cout<<"The value pointed to by stringREF : "<< stringREF<<std::endl;
}
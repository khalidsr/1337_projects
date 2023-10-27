/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:22:31 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/31 17:41:28 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <limits.h>

void printchar(char *str)
{
	char a;
	char *str1;
	std::string s;
	std::string s1;
	double k;

	s = static_cast<std::string>(str);
	k = strtod(str, &str1);
	s1 = static_cast<std::string>(str1);
	a = static_cast<char> (k);
	if ((k < 0 || k >= 127)||(!s.compare("nan")||!s.compare("-nan")||!s.compare("+nan") || !s.compare("+nanf")|| !s.compare("-nanf")||!s.compare("nanf")))
		std::cout<< "char: "<< "impossible" <<std::endl;
	else if (k >=0 && k <=31 )
		std::cout<< "char: " << " Non displayable" <<std::endl;
	else
		std::cout<<"char: '"<< a <<"'"<<std::endl;
}

void printint(char* str)
{
	int num;
	char *str1;
	double k;
	std::string s;

	k = strtod(str, &str1);
	s = static_cast<std::string> (str);
	num = static_cast<int> (k);
	if ((k > INT_MAX || k < INT_MIN)|| (!s.compare("nan")||!s.compare("-nan")||!s.compare("+nan") || !s.compare("+nanf")|| !s.compare("-nanf")||!s.compare("nanf")))
		std::cout<< "int: "<< "impossible" <<std::endl;
	else
		std::cout<<"int: "<< num  <<std::endl;

}

void printfloat(char *str)
{
	float f;
	float fl;
	float flo;
	char *str1;
	double k;
	std::string s;

	k = strtod(str, &str1);
	f = static_cast<float> (k);
	fl = modf(f, &flo);
	s = static_cast<std::string> (str);
	if (!s.compare("inf") ||!s.compare("+inf") ||!s.compare("-inf")||!s.compare("inff") ||!s.compare("+inff") ||!s.compare("-inff") )
		std::cout<<"float: " << f <<std::endl;
	else if(!fl)
		std::cout<<"float: " << f << ".0f" <<std::endl;
	else
		std::cout<<"float: " << f << "f" <<std::endl;
}

void printdouble(char *str)
{
	
	char *str1;
	double dl;
	double dou;
	double k;
	std::string s;

	k = strtod(str, &str1);
	dl = modf(k, &dou);
	s = static_cast<std::string> (str);
	
	if (!s.compare("inf") ||!s.compare("+inf") ||!s.compare("-inf")||!s.compare("inff") ||!s.compare("+inff") ||!s.compare("-inff") )
		std::cout<<"double: " << k << std::endl;
	else if(!dl)
		std::cout<<"douuble: " << k << ".0" <<std::endl;
	else
		std::cout<<"double: "<< k <<std::endl;

}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str;
		char *str1;
		std::string s;
		std::string s1;
		double k;
	
		str = av[1];
		s = static_cast<std::string>(str);
		k = strtod(str, &str1);
		s1 = static_cast<std::string>(str1);
		if (!s.compare("+nanf") || !s.compare("-nanf") ||  !s.compare("nanf")|| !s.compare("inff")||!s.compare("-inff")||!s.compare("+inff"))
		{
			printchar(str);
			printint(str);
			printfloat(str);
			printdouble(str);
		}
		else if ((s.find(".") == std::string::npos  && !s1.compare("f"))||(!s1.empty() && s1.compare("f")))
			std::cout<<"Invalid input"<<std::endl;
		else
		{
			printchar(str);
			printint(str);
			printfloat(str);
			printdouble(str);
		}
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:47:41 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:22:24 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat bureau("novac", 14);
		bureau.decrementgrade();
		std::cout<< bureau.getGrade()  << std::endl;
		bureau.incrementgrade();
		
		std::cout<<bureau.getGrade()<<std::endl;
		Bureaucrat a("tsitsipas",5);
		std::cout<< a<<std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl; 
	}
}
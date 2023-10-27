/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:47:41 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:24:26 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat bureau("Novac", 22);
		bureau.decrementgrade();
		std::cout<< bureau.getGrade()  << std::endl;
		bureau.incrementgrade();
		std::cout<<bureau.getGrade()<<std::endl;
		Bureaucrat a("Rojer", 2);
		std::cout<< a <<std::endl;
		Form form("Nadal", 7, 6);
		std::cout<< form <<std::endl;

		// form.beSigned(bureau);
		bureau.signForm(form);
	}
	catch(const std::exception& e) 
	{
		std::cerr<<e.what()<<std::endl;
	}
}
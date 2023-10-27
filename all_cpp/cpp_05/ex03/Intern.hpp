/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:04:03 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 21:20:16 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	
public:
	Intern();
	Intern(Intern const& intern);
	Intern& operator=(Intern const& intern);
	~Intern();
	Form* makeForm(std::string form_str, std::string target);
	Form* shrubform(std::string& target);
	Form* robot(std::string& target);
	Form* president(std::string& target);
};

#endif
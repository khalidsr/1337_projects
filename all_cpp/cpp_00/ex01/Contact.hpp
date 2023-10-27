/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:30:49 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 11:06:31 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

class Contact
{
private:
	std::string _fname;
	std::string _lname;
	std::string	_niname;
	std::string _phone_num;
	std::string _dar_secret;

public:
	Contact();
	~Contact();
	void	setfname(std::string str);
	void	setlname(std::string str);
	void	setniname(std::string str);
	void	setphone_num(std::string str);
	void	setdar_secret(std::string str);
	std::string		getdar_secret(void);
	std::string		getphone_num(void);
	std::string		getfname(void);
	std::string		getlname(void);
	std::string		getniname(void);
} ;

# endif
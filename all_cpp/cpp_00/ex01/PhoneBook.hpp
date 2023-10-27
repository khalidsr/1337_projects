/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:30:53 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 13:16:23 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
private :
	Contact store_contact[8];
public :
	PhoneBook();
	void	add(int i);
	void	search(int i);
	void	aff_contact(std::string str, std::string ptr, std::string s, int j);
	void	single_conctact(int i);
	std::string is_empty();
	~PhoneBook();
};

#endif

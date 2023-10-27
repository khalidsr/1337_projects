/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_replace.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:28:29 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 21:10:00 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_REPLACE_HPP
#define FILE_REPLACE_HPP

#include <string>

class file_replace
{
private:

public:
	file_replace(void);
	void	f_replace(std::string str,std::string s1, std::string s2);
	~file_replace();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:49:08 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/07 21:04:58 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _num;
	static const int _bn = 8;
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const& fixe);
	Fixed& operator=(Fixed const& fixe);
	Fixed operator-(Fixed const &fixe);
	Fixed operator+(Fixed const &fixe);
	Fixed operator*(Fixed const &fixe);
	bool operator<(Fixed const &fixe);
	bool operator==(Fixed const &fixe);
	Fixed operator/(Fixed const &fixe);
	bool operator<=(Fixed const &fixe);
	bool operator!=(Fixed const &fixe);
	~Fixed(void);
	float toFloat( void ) const;
	int toInt( void ) const;
	void setInt(int const raw);
	void setFloat(float const raw);
	float  getFloat(void)const;
	int	getInt(void)const;
};

std::ostream& operator<<(std::ostream& o , Fixed const& fixed);

#endif
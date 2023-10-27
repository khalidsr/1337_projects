/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:28:32 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 11:03:19 by sriyani          ###   ########.fr       */
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
	Fixed(Fixed const& fixe);
	Fixed& operator=(Fixed const& fixe);
	Fixed(int const n);
	Fixed(float const f);
	bool operator>(Fixed const &fixe);
	bool operator<(Fixed const &fixe);
	bool operator>=(Fixed const &fixe);
	bool operator<=(Fixed const &fixe);
	bool operator==(Fixed const &fixe);
	bool operator!=(Fixed const &fixe);
	
	Fixed  operator+(Fixed const &fixe);
	Fixed  operator-(Fixed const &fixe);
	Fixed  operator*(Fixed const &fixe);
	Fixed  operator/(Fixed const &fixe);
	Fixed&  operator++();
	Fixed&  operator--();
	Fixed  operator++( int );
	Fixed  operator--( int );

	static Fixed const& max(Fixed const& a, Fixed const& b);
	static Fixed const& min(Fixed const& a, Fixed const& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	float toFloat(void) const;
	int toInt(void) const;
	int getInt(void)const;
	void setInt(int n);
	void setFloat(float f);
	~Fixed(void);
	
};
std::ostream& operator<<(std::ostream& o,Fixed const & fixed);

#endif
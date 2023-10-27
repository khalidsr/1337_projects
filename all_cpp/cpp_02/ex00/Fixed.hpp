/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:18:26 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 09:49:53 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int _num;
	static const int _bn = 8;
public:
	Fixed();
	Fixed(Fixed const& fixed);
	Fixed& operator=(Fixed const& fixed);
	void setRawBits( int const raw );
	int getRawBits( void ) const;
	~Fixed();
};


#endif
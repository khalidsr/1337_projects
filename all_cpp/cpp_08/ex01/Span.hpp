/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:26:41 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/23 17:34:23 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>


class Span
{
private:
	unsigned int N;
	std::vector<int> _tab;
public:
	Span();
	Span(unsigned int n);
	Span(Span const& span);
	Span& operator=(Span const& span);
	unsigned int getN()const;
	void addNumber(int mum);
	int shortestSpan();
	int longestSpan();
	void addSpan();
	std::vector<int> getTab();
	~Span();
};



#endif
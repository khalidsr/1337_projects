/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:39:41 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/31 18:47:38 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *base;
	base = generate();
	identify(base);

	identify(*base);
	
	delete base;
	// system("leaks Identify_real_typ");
}
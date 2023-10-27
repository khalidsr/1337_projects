/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:32:14 by sriyani           #+#    #+#             */
/*   Updated: 2023/02/02 15:47:30 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
	int tab[] = {3, 43, 46, 7, 6, 67, 43, 12, 6};
	std::vector<int> v1 (tab, tab + 9);
	std::deque<int> d1(tab, tab + 9);
	std::list<int> l1(tab, tab + 9);

	unsigned int nb;
	nb = easyfind(v1, 6);
	std::cout << "Element found in c: " << nb <<std::endl;
	nb = easyfind(d1,7);
	std::cout << "Element found in c: " << nb <<std::endl;
	nb = easyfind(l1, 13);
	std::cout << "Element found in c: " << nb <<std::endl;

}
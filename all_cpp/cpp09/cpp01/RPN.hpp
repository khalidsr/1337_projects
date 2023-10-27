/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:26:40 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/03 16:23:22 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
private:
   std::stack<int> stack;
   int result;
public:
    RPN();
    RPN(RPN const& other);
    RPN& operator=(RPN const& other);
    void check_arg(std::string const& str);
    int is_operator(char op);
    std::stack<int>& getStack();
    int&  getResult();
    void print_result();
    void find_operat(char c, int nb);
    ~RPN();
};



#endif
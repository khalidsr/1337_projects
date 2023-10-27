/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:27:30 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/31 09:23:36 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}
RPN::RPN(RPN const &other)
{
    *this = other;
}
RPN &RPN::operator=(RPN const &other)
{
    this->stack = other.stack;
    this->result = other.result;
    return *this;
}

int RPN::is_operator(char op)
{
    if (op == '/' || op == '*' || op == '+' || op == '-')
        return 1;
    return (0);
}
void RPN::find_operat(char c, int nb)
{
    int op = 0;
    std::string operate = "+-/*";
    for (size_t i = 0; i < operate.size(); i++)
    {
        if (c == operate[i])
            op = i;
    }
    switch (op)
    {
    case 0:
        result += nb;
        break;
    case 1:
        result -= nb;
        break;
    case 2:
    {
        if (nb == 0)
        {
            std::cout<<"Error"<<std::endl;
            exit (1);
        }
        result /= nb;
        break;
    }
    case 3:
        result *= nb;
        break;
    }
    stack.push(result);
}

void RPN::check_arg(std::string const &str)
{
    int num;
    int nb = 0;
    result = 0;
    size_t op = 0;
    size_t nr = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (isdigit(str.c_str()[i]) || is_operator(str[i]) || str[i] == ' ')
        {
            if (is_operator(str[i]) && !nr)
            {
                std::cout << "ERROR" << str[i] << std::endl;
                exit(1);
            }
            if (isdigit(str.c_str()[i]))
            {
                num = str[i] - 48;
                stack.push(num);
                nr++;
            }
            if (is_operator(str[i]))
            {
                if (stack.size() > 1)
                {
                    nb = stack.top();
                    stack.pop();
                    result = stack.top();
                    stack.pop();
                }
                find_operat(str[i], nb);
                op++;
            }
        }
        else
        {
            std::cout << "ERROR" << str[i] << std::endl;
            exit(1);
        }
    }
    if (op >= nr || nr != op + 1)
    {
        std::cout << "ERROR" << std::endl;
        exit(1);
    }
}

std::stack<int> &RPN::getStack()
{
    return stack;
}

int &RPN::getResult()
{
    return result;
}

void RPN::print_result()
{
    std::cout << result << std::endl;
}

RPN::~RPN()
{
}

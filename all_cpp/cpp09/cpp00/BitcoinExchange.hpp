/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:23:13 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/30 13:21:36 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <sstream>

class BitcoinEXchange
{
private:
    std::map<std::string, float> _map;

public:
    BitcoinEXchange();
    BitcoinEXchange(BitcoinEXchange const &other);
    BitcoinEXchange &operator=(BitcoinEXchange const &other);
    ~BitcoinEXchange();
    void fill_map(std::string &name);
    void check_file(std::string &name);
    std::map<std::string, float> const &getMap() const;
    void printmsg(std::string const &key, std::string const &value);
    int extruct_value(std::string &value);
    int isvalue_digit(std::string &value);
    int pars_key(std::string &key);
    float find_value(std::string &key);
    std::string float_string(float f);
};

#endif
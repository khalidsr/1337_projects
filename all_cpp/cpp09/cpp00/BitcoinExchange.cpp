/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:26:38 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/31 15:10:30 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinEXchange::BitcoinEXchange()
{
}
BitcoinEXchange::BitcoinEXchange(BitcoinEXchange const &other)
{
    *this = other;
}
BitcoinEXchange &BitcoinEXchange::operator=(BitcoinEXchange const &other)
{
    this->_map = other.getMap();
    return *this;
}
BitcoinEXchange::~BitcoinEXchange()
{
}

void BitcoinEXchange::printmsg(std::string const &key, std::string const &value)
{
    std::cout << key;
    if (value.size())
        std::cout << "==> " << value << std::endl;
    else
        std::cout << std::endl;
}
int BitcoinEXchange::isvalue_digit(std::string &value)
{
    float f;
    for (size_t i = 0; i < value.size(); i++)
    {
        if (!isdigit(value.c_str()[i]))
        {
            f = atof(value.c_str());
            if (f < 0)
                return 2;
            return 1;
        }
    }
    return 0;
}

int BitcoinEXchange::extruct_value(std::string &value)
{
    size_t find = value.find(",");
    float f;
    int index;
    if (find != std::string::npos)
        value.replace(find, 1, ".");
    size_t count = std::count(value.begin(), value.end(), ',');
    if (count)
        return 1;
    index = isvalue_digit(value);
    switch (index)
    {
    case 1:
    {
        count = std::count(value.begin(), value.end(), '.');
        if (count == 1)
            return 0;
        return 1;
    }
    case 2:
        return 2;
    }
    f = atof(value.c_str());
    if (f > 1000)
        return 3;
    return 0;
}
int BitcoinEXchange::pars_key(std::string &key)
{
    if (key.length() == 11)
    {
        std::string str = key.substr(0, 4);
        std::string ptr = key;
        int y = atoi(str.c_str());
        str = key.substr(5, 2);
        int m = atoi(str.c_str());
        str = key.substr(8, 2);
        int d = atoi(str.c_str());
        size_t find = ptr.find("-");
        ptr = ptr.c_str() + 5;
        size_t found = ptr.find("-");
        size_t fnd = ptr.find(" ");
        if (find != 4 || found != 2 || fnd != 5)
            return 1;
        else if (((m == 4 || m == 6 || m == 9 || m == 11) && d == 31) || (m == 2 && d > 29))
            return 1;
        else if (key.length() != 11 || y < 2009 || m < 1 || m > 12 || d < 1 || d > 31)
            return 1;
    }
    else
        return 1;

    return 0;
}

void BitcoinEXchange::check_file(std::string &name)
{
    std::string key;
    static int i;
    std::string value;
    float f;
    float flo;
    int index = 0;
    std::string ptr = key;

    if (i == 0 && !name.compare("date | value"))
        return;
    size_t find = name.find("|");
    if (find != std::string::npos)
    {
        key = name.substr(0, find);
        value = name.c_str() + (find + 2);
        index = extruct_value(value);
        if (!index && pars_key(key))
            index = 1;
        switch (index)
        {
        case 1:
        {
            key = "Error: bad input";
            value = "";
            break;
        }
        case 2:
        {
            key = "Error: not a positive number.";
            value = "";
            break;
        }
        case 3:
        {
            key = "Error: too large a number.";
            value = "";
            break;
        }
        default:
        {
            ptr = name.substr(0, 10);
            flo = find_value(ptr);
            f = atof(value.c_str()) * flo;
            value = float_string(f);
            break;
        }
        }
    }
    else
    {
        key = "Error: bad input ";
        value = name;
    }
    i++;
    this->printmsg(key, value);
}

float BitcoinEXchange::find_value(std::string &key)
{
    float value;
    std::map<std::string, float>::iterator it = _map.begin();
    it = _map.lower_bound(key);
    if (it->first != key)
    {
        if (it != _map.begin())
            --it;
        else
        {
            std::cout << "Key not found ." << std::endl;
            exit(0);
        }
    }
    value = it->second;
    return value;
}

void BitcoinEXchange::fill_map(std::string &name)
{
    std::string key;
    float value;
    size_t find = name.find(",");
    if (find != std::string::npos)
    {
        key = name.substr(0, find);
        value = atof(name.c_str() + (find + 1));
        _map.insert(std::pair<std::string, float>(key, value));
    }
}

std::string BitcoinEXchange::float_string(float f)
{
    std::stringstream ss;
    std::string str;
    ss << f;
    str = ss.str();
    return str;
}
std::map<std::string, float> const &BitcoinEXchange::getMap() const
{
    return _map;
}
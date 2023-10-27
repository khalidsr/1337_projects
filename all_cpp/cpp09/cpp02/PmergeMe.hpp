/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:34:06 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/31 14:37:52 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sys/time.h>

class PmergeMe
{
private:
    double rslt_vec;
    double rslt_deq;
    std::vector<unsigned int> vec;
    std::deque<unsigned int> deq;

public:
    PmergeMe();
    PmergeMe(PmergeMe const &other);
    PmergeMe &operator=(PmergeMe const &other);
    void check_arg(std::string const &str);
    int is_digit(std::string const &str);
    void before_after(std::string const &str);
    void merge_insert(size_t k);
    bool is_sorted();
    void insert_vec();
    void insert_deq();
    void merge_vec(size_t l, size_t m, size_t r);
    void merge_deq(size_t l, size_t m, size_t r);
    void sort_vec(size_t l, size_t r, size_t k);
    void sort_deq(size_t l, size_t r, size_t k);
    void use_merge();
    void print_time();
    ~PmergeMe();
};
#endif
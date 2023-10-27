/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:33:51 by sriyani           #+#    #+#             */
/*   Updated: 2023/05/31 14:48:31 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}
PmergeMe::PmergeMe(PmergeMe const &other)
{
    *this = other;
}
PmergeMe &PmergeMe::operator=(PmergeMe const &other)
{
    rslt_vec = other.rslt_vec;
    rslt_deq = other.rslt_deq;
    vec = other.vec;
    deq = other.deq;
    return *this;
}
int PmergeMe::is_digit(std::string const &str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if (!isdigit(str.c_str()[i]))
            return 0;
    }
    return 1;
}
void PmergeMe::before_after(std::string const &str)
{
    std::cout << str;
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << " " << vec[i];
    std::cout << std::endl;
}

void PmergeMe::check_arg(std::string const &str)
{
    unsigned int num;
    num = atoi(str.c_str());
    if (!is_digit(str))
    {
        std::cout << "Error" << std::endl;
        exit(1);
    }
    vec.push_back(num);
    deq.push_back(num);
}
bool PmergeMe::is_sorted()
{
    for (size_t i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] > vec[i + 1])
            return false;
        if (deq[i] > deq[i + 1])
            return false;
    }
    return true;
}

void PmergeMe::merge_vec(size_t low, size_t mid, size_t high)
{
    size_t i;
    size_t j;
    size_t k;
    std::vector<unsigned int> temp(vec.size());

    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (vec[i] < vec[j])
        {
            temp[k] = vec[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = vec[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = vec[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = vec[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
        vec[i] = temp[i];
}

void PmergeMe::merge_deq(size_t low, size_t mid, size_t high)
{
    size_t i;
    size_t j;
    size_t k;
    std::deque<unsigned int> temp(deq.size());

    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (deq[i] < deq[j])
        {
            temp[k] = deq[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = deq[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = deq[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = deq[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
        deq[i] = temp[i];
}

void PmergeMe::sort_vec(size_t l, size_t r, size_t k)
{
    if (r - l > k)
    {
        size_t m = (l + r) / 2;
        sort_vec(l, m, k);
        sort_vec(m + 1, r, k);
        merge_vec(l, m, r);
    }
    else
        insert_vec();
}

void PmergeMe::sort_deq(size_t l, size_t r, size_t k)
{
    if (r - l > k)
    {
        size_t m = (l + r) / 2;
        sort_deq(l, m, k);
        sort_deq(m + 1, r, k);
        merge_deq(l, m, r);
    }
    else
        insert_deq();
}
void PmergeMe::print_time()
{
    std::cout << "Time to process a range of" << vec.size() << "elements with std::vector : " << rslt_vec << " us" << std::endl;
    std::cout << "Time to process a range of" << deq.size() << "elements with std::deque : " << rslt_deq << " us" << std::endl;
}
void PmergeMe::merge_insert(size_t k)
{
    clock_t start_vec;
    clock_t start_deq;
    start_vec = clock();
    sort_vec(0, vec.size() - 1, k);
    rslt_vec = clock() - start_vec;

    start_deq = clock();
    sort_deq(0, deq.size() - 1, k);
    rslt_deq = clock() - start_deq;
}

void PmergeMe::insert_vec()
{
    for (size_t i = 1; i < vec.size(); i++)
    {
        int temp = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > temp)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = temp;
    }
}

void PmergeMe::insert_deq()
{
    for (size_t i = 1; i < deq.size(); i++)
    {
        int temp = deq[i];
        int j = i - 1;
        while (j >= 0 && deq[j] > temp)
        {
            deq[j + 1] = deq[j];
            j--;
        }
        deq[j + 1] = temp;
    }
}

PmergeMe::~PmergeMe()
{
}

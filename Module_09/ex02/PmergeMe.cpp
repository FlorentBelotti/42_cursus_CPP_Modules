/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:14:48 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/28 17:45:46 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::~PmergeMe(void) {}

int isDigit(const char* str)
{
    while (*str)
    {
        if (!std::isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

int PmergeMe::parseArgs(char** av)
{
    int i = 0;
    while (av[i])
    {
        if (!isDigit(av[i]))
        {
            std::cout << RED << "Error: " << av[i] << " isn't a number." << RESET_COLOR << std::endl;
            return 1;
        }
        long num = std::atol(av[i]);
        if (num < 0 || num > INT_MAX)
        {
            std::cout << RED << "Error: " << av[i] << " number is too long." << RESET_COLOR << std::endl;
            return 1;
        }
        
        this->args.push_back(static_cast<int>(num));
        i++;
    }
    return 0;
}

int isSorted(const std::vector<int>& v)
{
    for (size_t i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
            return 0;
    }
    return 1;
}

int PmergeMe::sortVector(void)
{
    std::clock_t start = std::clock();
    
    if (isSorted(this->args)) {
        std::cout << "Already sorted" << std::endl;
        this->vector_sorted = this->args;
        return 1;
    }

    if (this->args.size() == 1) {
        this->vector_sorted.push_back(this->args[0]);
        std::cout << "Only one number" << std::endl;
        return 1;
    }

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < this->args.size(); i += 2) {
        int first = this->args[i];
        int second = (i + 1 < this->args.size()) ? this->args[i + 1] : -1;
        if (second != -1 && first > second)
            std::swap(first, second);
        pairs.push_back(std::make_pair(first, second));
    }

        std::vector<int> mins;
    for (size_t i = 0; i < pairs.size(); ++i)
        mins.push_back(pairs[i].first);
    std::sort(mins.begin(), mins.end());

    std::vector<int> sorted = mins;
    for (size_t i = 0; i < pairs.size(); ++i) {
        if (pairs[i].second != -1) {
            std::vector<int>::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), pairs[i].second);
            sorted.insert(pos, pairs[i].second);
        }
    }

    this->vector_sorted = sorted;
    this->vector_duration = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC * 1000;
    return 0;

}

int PmergeMe::sortList(void)
{
    std::clock_t start = std::clock();
    
    if (isSorted(this->args)) {
        std::cout << "Already sorted" << std::endl;
        this->list_sorted = std::list<int>(this->args.begin(), this->args.end());
        return 1;
    }

    if (this->args.size() == 1) {
        this->list_sorted.push_back(this->args[0]);
        std::cout << "Only one number" << std::endl;
        return 1;
    }

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < this->args.size(); i += 2) {
        int first = this->args[i];
        int second = (i + 1 < this->args.size()) ? this->args[i + 1] : -1;
        if (second != -1 && first > second)
            std::swap(first, second);
        pairs.push_back(std::make_pair(first, second));
    }

    std::vector<int> mins;
    for (size_t i = 0; i < pairs.size(); ++i)
        mins.push_back(pairs[i].first);
    std::sort(mins.begin(), mins.end());

    std::list<int> sorted;
    for (size_t i = 0; i < pairs.size(); ++i) {
        std::list<int>::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), pairs[i].first);
        sorted.insert(pos, pairs[i].first);
        if (pairs[i].second != -1) {
            pos = std::lower_bound(sorted.begin(), sorted.end(), pairs[i].second);
            sorted.insert(pos, pairs[i].second);
        }
    }

    this->list_sorted = sorted;
    this->list_duration = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC * 1000;
    return 0;
}

void PmergeMe::displayResult()
{
    std::cout << YELLOW << "Before: ";
    for (std::vector<int>::const_iterator it = this->args.begin(); it != this->args.end(); ++it)
    {
        if (*it != -1)
            std::cout << *it << " ";
    }

    std::cout << BLUE << "\nAfter (vector): ";
    for (std::vector<int>::const_iterator it = this->vector_sorted.begin(); it != this->vector_sorted.end(); ++it)
    {
        if (*it != -1)
            std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << YELLOW << "Time to process a range of " << this->args.size() << " elements with std::list: " << this->list_duration << "us" << std::endl;
    std::cout << BLUE << "Time to process a range of " << this->args.size() << " elements with std::vector: " << this->vector_duration << "us" << RESET_COLOR << std::endl;
}
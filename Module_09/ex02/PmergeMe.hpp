/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:07:08 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/28 17:44:33 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <cctype>
#include <ctime> 
#include <vector>
#include <list>
#include <cctype>
#include <cstdlib>
#include "Color.hpp"

class PmergeMe
{
  private:
  
    std::vector<int> args;
    
    std::vector<int> vector_sorted;
    double vector_duration;

    std::list<int> list_sorted;
    double list_duration;

    public :
    
    PmergeMe(void);
    ~PmergeMe(void);
    int parseArgs(char** av);
    int sortVector(void);
    int sortList(void);
    void displayResult(void);
};
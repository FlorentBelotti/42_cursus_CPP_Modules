/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:26:26 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/22 17:58:08 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Color.hpp"

int main() {
    int int_array[] = { 1, 2, 3, 4, 5 };
	std::string string_array[] = { "one", "two", "three", "four", "five" };
	
	std::cout << BLUE << "----- int_array -----" << RESET_COLOR << std::endl;
	::iter(int_array, 5, print_test);
	std::cout << std::endl;

	std::cout << BRIGHT_BLUE << "----- transformed_int_array -----" << RESET_COLOR << std::endl;
	::iter(int_array, 5, add_one);
	::iter(int_array, 5, print_test);
	std::cout << std::endl;

	std::cout << MAGENTA << "----- char_array -----" << RESET_COLOR << std::endl;
	::iter(string_array, 5, print_test);
	std::cout << std::endl;

	return 0;
}
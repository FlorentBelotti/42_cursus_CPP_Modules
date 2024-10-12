/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:18:08 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/12 18:32:57 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Color.hpp"

int main() {
    Data data;

    data.number = 42;
    data.text = "Céréale Killer";

    std::cout << YELLOW << "\n----- Data -----" << RESET_COLOR << std::endl;
    std::cout << data.number << std::endl;
    std::cout << data.text << std::endl;

    std::cout << YELLOW << "\n----- Conversion -----" << RESET_COLOR << std::endl;
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialize data : " << raw << std::endl;
    
    Data* ptr = Serializer::deserialize(raw);
    std::cout << YELLOW << "\n----- Ptr -----" << RESET_COLOR << std::endl;
    std::cout << ptr->number << std::endl;
    std::cout << ptr->text << std::endl;

    return 0;
}
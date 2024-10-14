/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:25:52 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/14 16:31:19 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.cpp"

int main() {
    Base *base = Generate();
    identify(base);
    identify(*base);
    delete base;
    return 0;
}
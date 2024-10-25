/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:33:30 by fbelotti          #+#    #+#             */
/*   Updated: 2024/10/25 14:49:59 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Nom du programme : btc

Objectif : affiche la valeur d'une certaine quantité de bitcoins à une date donnée.

Base de donnee : data.csv
Entree du programme : un fichier "input.txt" avec le format suivant "YYYY-MM-DD | X.XX", avec X, un entier ou un float qui represente la valeur du bitcoin.

Si la date n'est pas presente dans la base de donnee, le programme doit utiliser la valeur la plus proche de la date donnee, lorsque c'est possible la date precedente.

Format de data.csv:

date | exchange_rate
YYYY-MM-DD | 3

Format de la sortie du programme :

"YYYY-MM-DD => X = Y"

ou X est la valeur du bitcoin et Y est la valeur multiplie par le taux de change de la date approprie.

*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:22:06 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/05 13:22:09 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde;
    int i;

    if (N <= 0)
        return NULL;
    horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++; 
    }
    return (horde);
}

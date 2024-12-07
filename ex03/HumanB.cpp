/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:18:12 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/05 13:18:15 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
    this->name = name;
    wea = NULL;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    wea = &newWeapon;
}

void HumanB::attack () const 
{
    if (wea)
        std::cout << name << " attacks with their " << wea->getType() << std::endl ;
    else
        std::cout << name << " has no weapon!" << std::endl;
}

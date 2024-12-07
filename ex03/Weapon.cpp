/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:19:38 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/05 13:19:41 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
    this->type = type;
}
const std::string &Weapon::getType () const
{
    return type;
}
void Weapon::setType(const std::string& newType)
{
    type = newType;            
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:21:52 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/05 13:21:55 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "";
}

Zombie::Zombie(std::string zombieName)
{
    name = zombieName;
    std::cout << "Zombie object " << name << " created" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " has been destroyed." << std::endl;
}

void    Zombie::setName(std::string zombieName)
{
    name = zombieName;
}

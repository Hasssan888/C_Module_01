/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:18:00 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/05 13:18:03 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"


class HumanA {
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(const std::string &name, Weapon &weapon);
        void attack() const;
};

#endif

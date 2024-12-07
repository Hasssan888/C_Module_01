/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:05:13 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/05 13:05:15 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() 
{
    Harl harl;

    std::cout << "Testing with DEBUG level:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nTesting with INFO level:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nTesting with WARNING level:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nTesting with ERROR level:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nTesting with an unknown level:" << std::endl;
    harl.complain("SILENT");

    return 0;
}
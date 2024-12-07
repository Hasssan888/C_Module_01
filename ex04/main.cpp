/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:16:08 by hbakrim           #+#    #+#             */
/*   Updated: 2024/12/05 13:16:11 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "openfile.hpp"

int main(int argc, char *argv[]) 
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceAndWrite(filename, s1, s2);
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 23:40:44 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/07 12:41:04 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Kevin");
    ClapTrap b("Enemy");
    a.attack("Enemy");
    b.takeDamage(0);
    b.attack("Kevin");
    a.takeDamage(0);
    a.beRepaired(5);
    for (int i = 0; i < 15; i++)
        a.attack("Enemy");

    return (0);
}
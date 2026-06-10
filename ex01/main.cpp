/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 23:40:44 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/09 13:32:37 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Guardian");
    scav.attack("Bandit");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();
    //scav.getinfo();
    for (int i = 0; i < 4; i++)
        scav.attack("Target");

    return (0);
}
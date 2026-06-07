/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 23:40:44 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/07 12:23:12 by kwillian         ###   ########.fr       */
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

    for (int i = 0; i < 55; i++)
        scav.attack("Target");

    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 23:40:44 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/09 15:35:37 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamond");

    diamond.attack("Enemy");
    diamond.takeDamage(40);
    diamond.beRepaired(25);
    diamond.whoAmI();
    diamond.guardGate();
    diamond.highFivesGuys();

    for (int i = 0; i < 105; i++)
        diamond.attack("Dummy");

    return (0);
}
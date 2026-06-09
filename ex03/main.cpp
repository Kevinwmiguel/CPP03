/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 23:40:44 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/10 00:19:26 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamond");

    diamond.attack("Enemy");
    // diamond.takeDamage(40);
    // diamond.beRepaired(25);
    // for (int i = 0; i < 5; i++)
    //     diamond.attack("Dummy");
    // diamond.guardGate();
    // diamond.highFivesGuys();
    // diamond.whoAmI();
    diamond.getinfo();
    return (0);
}
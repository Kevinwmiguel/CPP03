/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 23:40:44 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/06 12:14:36 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap Clap("Clap");
    ClapTrap Clap2("Trap");
    
    ScavTrap Trap("scrav");

    Clap.attack("Trap");
    Clap2.beRepaired(3);
    
    Clap2.attack("Clap");
    Clap.takeDamage(999);

    Clap2.beRepaired(4);
    
    Trap.guardGate();
    Trap.attack("Clap");
    Trap.takeDamage(999);
    Trap.attack("Clap");

    return (0);
}
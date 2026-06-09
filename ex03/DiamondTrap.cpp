/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:56:04 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/10 00:35:50 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// void DiamondTrap::getinfo()
// {
//     std::cout << " name " << this->_name << " attack damage " <<
//         this->_attackDamage << " hitpoints " 
//         << this->_hitPoints << " energy points "
// 		<< this->_energyPoints <<
// 		std::endl << std::endl << std::endl;
// }

DiamondTrap:: DiamondTrap()
{
    this->_hitPoints = 100; // FragTrap;
    this->_energyPoints = 50; // ScavTrap;
    this->_attackDamage = 30; // FragTrap;
    std::cout << "The DiamondTrap Constructor has been called " << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "The DiamondTrap Destructor has been called " << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"),
      ScavTrap(name),
      FragTrap(name),
      _name(name)
{
    _hitPoints = 100;      // FragTrap
    _energyPoints = 50;    // ScavTrap
    _attackDamage = 30;    // FragTrap

    std::cout << "The DiamondTrap Constructor has been called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name: " << this->_name << " ClapTrap name: " << ClapTrap::_name << std::endl;
}
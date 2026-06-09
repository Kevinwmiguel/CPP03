/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DIamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:56:04 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/09 15:51:36 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap:: DiamondTrap()
{
    std::cout << "The DiamondTrap Constructor has been called " << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "The DiamondTrap Destructor has been called " << std::endl;
}

DiamondTrap:: DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
      ScavTrap(name),
      FragTrap(name),
      
      _name(name)
{
    ClapTrap::_name = name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "The DiamondTrap Constructor has been called " << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name: " << this->_name << " ClapTrap name: " << ClapTrap::_name << std::endl;
}
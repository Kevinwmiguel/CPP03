/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:57:59 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/04 00:24:02 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



ClapTrap:: ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " created." << std::endl;
    this->name = name;
    this->Hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}

void ClapTrap:: attack(const std::string& target)
{
    if (this->energy_points > 0 && this->Hit_points > 0)
    {
        std::cout  << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage! " << std::endl;
        this->energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->name << " Cannot attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_points > 0)
    {
        std::cout << "ClapTrap " << this->name << " Takes " << amount << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " Is already dead" << std::endl;   
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points > 0 && this->Hit_points > 0)
    {
        this->energy_points--;
        this->Hit_points +=amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " Cannot be repaired " << std::endl;    
}
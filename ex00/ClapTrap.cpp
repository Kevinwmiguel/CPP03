/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:57:59 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/07 12:46:29 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap:: ClapTrap()
{
    std::cout << "ClapTrap created." << std::endl;
    this->name = "ClapTrap";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap:: ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " created." << std::endl;
    this->name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " destroyed." << std::endl;
}

void ClapTrap:: attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout  << "ClapTrap " << this->name << " attacks " << target << " causing " << this->_attackDamage << " points of damage! " << std::endl;
        this->_energyPoints--;
    }
    else if (this->_energyPoints <= 0)
        std::cout << "ClapTrap " << this->name << " Cannot attack due to lack of energy points" << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " Is already dead" << std::endl;  
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " Takes " << amount << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " Is already dead" << std::endl;   
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        this->_hitPoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " Cannot be repaired " << std::endl;    
}
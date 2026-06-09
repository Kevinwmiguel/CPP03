/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:57:59 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/09 15:47:17 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap:: ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " created." << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed." << std::endl;
}

void ClapTrap:: attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout  << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage! " << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << "ClapTrap " << this->_name << " Cannot attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " Takes " << amount << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " Is already dead" << std::endl;   
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        this->_energyPoints--;
        this->_hitPoints +=amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " Cannot be repaired " << std::endl;    
}
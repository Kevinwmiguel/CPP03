/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 00:29:43 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/09 15:46:43 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// void ScavTrap::getinfo()
// {
//     std::cout << " name " << this->_name << " attack damage " <<
//         this->_attackDamage << " hitpoints " 
//         << this->_hitPoints << " energy points "
// 		<< this->_energyPoints <<
// 		std::endl;   
// }

ScavTrap:: ScavTrap()
{
	std::cout << "The ScavTrap constructor has been called" << std::endl;
}

ScavTrap:: ~ScavTrap()
{
	std::cout << "The ScavTrap destructor has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other)
{
    *this = other;
    std::cout << "The ScavTrap copy constructor has been called" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< "ScavTrap " << _name << " tried to go in Gate keeper mode, but has no energyPoints left to perform guardGate!\n";
	}
	else
	{
		std::cout	<< "ScavTrap " << _name << " tried to go in Gate keeper mode, but is already destroyed!\n";
	}
}

ScavTrap:: ScavTrap(std::string name)
{
	std::cout << "ScavTrap Constractor was called to " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout  << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage! " << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout	<< "ScavTrap " << _name << " tried to attack " << target << ", but has no energyPoints left to perform attack!\n";
	}
	else
	{
		std::cout	<< "ScavTrap " << _name << " tried to attack " << target << ", but is already destroyed!\n";
	}
}
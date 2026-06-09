/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 17:27:04 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/09 15:47:24 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap& FragTrap::operator=(const FragTrap& other)
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

FragTrap:: FragTrap(std::string name)
{
    std::cout << "FragTrap " << name << " created." << std::endl;
    //_name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap " << " created." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << " FragTrap " << _name << " High Fives Guys!" << std::endl;
}   


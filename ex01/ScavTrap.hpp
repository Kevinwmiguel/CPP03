/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 00:30:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/04 00:33:56 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string.h>
#include <cctype>

class ScavTrap : public ClapTrap
{
    private:
    std::string name;
    std::string name;
    int         Hit_points;
    int         energy_points;
    int         attack_damage;

    public:

    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void attack(const std::string& target);
    ScavTrap&operator=(ScavTrap& other);
    void guardGate();
};

#endif
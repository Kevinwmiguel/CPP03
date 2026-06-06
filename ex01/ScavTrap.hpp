/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 00:30:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/06 12:01:08 by kwillian         ###   ########.fr       */
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
    public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap&operator=(ScavTrap& other);
    void attack(const std::string& target);
    void guardGate();
};

#endif
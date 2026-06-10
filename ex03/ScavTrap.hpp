/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 00:30:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/09 15:49:15 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string.h>
#include <cctype>

class ScavTrap : virtual public ClapTrap
{
    public:
    //void    getinfo();
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap&operator=(const ScavTrap& other);
    void attack(const std::string& target);
    void guardGate();
};

#endif
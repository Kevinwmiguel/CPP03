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
    public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void attack(const std::string& target);
};

#endif
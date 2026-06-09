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

DiamondTrap:: DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
      ScavTrap(name),
      FragTrap(name),
      _name(name)
{
    std::cout << "The DiamondTrap Constructor has been called " << std::endl;
}

void whoAmI()
{
    
}
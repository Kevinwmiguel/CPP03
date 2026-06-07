/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DIamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:56:04 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/07 12:27:16 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap:: DiamondTrap()
{
    std::cout << "The DiamondTrap Constructor has been called " << std::endl;
}

DiamondTrap:: DiamondTrap(const std::string& name)
{
    std::cout << "The DiamondTrap Constructor has been called " << std::endl;
    _name = name;
}

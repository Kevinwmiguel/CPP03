/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 17:27:13 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/09 15:47:14 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string.h>
#include <cctype>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& name);
    ~FragTrap();
    void highFivesGuys(void);
    FragTrap& operator=(const FragTrap& other);
};

#endif
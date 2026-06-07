/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillian <kwillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 23:40:44 by kwillian          #+#    #+#             */
/*   Updated: 2026/06/07 12:57:00 by kwillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Fraggy");
    frag.attack("Enemy");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();
    return (0);
}
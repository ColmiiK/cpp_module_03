/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:36:40 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/11 16:56:13 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <ClapTrap.hpp>

int main( void ) {
	ClapTrap clap("Clap Foo");
	ScavTrap scav("Scav Foo");

	// clap.attack("Bar");
	// clap.takeDamage(5);
	// clap.attack("Bar");
	// clap.beRepaired(1);
	// clap.takeDamage(10);
	// clap.attack("Bar");
	scav.attack("Bar");
}
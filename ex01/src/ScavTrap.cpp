/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:50:47 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/11 17:28:38 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap( void ) : ClapTrap () {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap( std::string str ) : ClapTrap ( str ) {
	name = str;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& source ) : ClapTrap ( source ) {
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;	
}

ScavTrap::~ScavTrap( void ) {
	
}

void ScavTrap::attack( const std::string& target ) {
	if (hitPoints <= 0) {
		std::cout << "ScavTrap " << name << " has no hit points left!" << std::endl;
	}
	else if (energyPoints <= 0) {
		std::cout << "ScavTrap " << name << " has no enery points left!" << std::endl;
	}
	else {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate( void ) {
	gate_keeper_mode = true;
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode!" << std::endl;
}
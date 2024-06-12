/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:59:41 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/12 11:27:20 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

static void print_constructor(std::string name) {
	std::cout << "Constructing FragTrap " << name << std::endl;
}

FragTrap::FragTrap( void ) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	print_constructor(name);
}

FragTrap::FragTrap( std::string str ) : ClapTrap(str) {
	name = str;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	print_constructor(name);
}

FragTrap::FragTrap( const FragTrap& source ) {
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;
}

FragTrap& FragTrap::operator=( const FragTrap& source ) {
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;
	return (*this);
}

FragTrap::~FragTrap( void ) {
	std::cout << "Deconstructing FragTrap " << name << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " <<  name << " wants to high five you, do you accept?" << std::endl;
}
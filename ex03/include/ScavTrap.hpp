/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:51:02 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/25 16:41:58 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap {
	private:
		bool gate_keeper_mode;
	public:
		ScavTrap( void );
		ScavTrap( std::string str );
		ScavTrap( const ScavTrap& source );
		~ScavTrap( void );

		void attack( const std::string& target );
		void guardGate( void );
};


#endif 
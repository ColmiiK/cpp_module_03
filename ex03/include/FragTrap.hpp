/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:59:57 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/25 16:47:11 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string str );
		~FragTrap( void );
		
		void highFivesGuys( void );
};

#endif
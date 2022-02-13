/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:02:58 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/13 17:24:16 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define ITENS 4

class Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const & src);
		virtual ~Character(void);
		Character & operator=(Character const & rhs);
		
		Character(std::string name);
		void	setName(std::string name);
		
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria	*_inventory[ITENS];
		void 		_init(void);
};

#endif

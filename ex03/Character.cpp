/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:30:38 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/13 18:18:16 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("")
{
	this->_init();
	std::cout << "Character Constructor" << std::endl;
	return;
}

Character::Character(Character const & src)
{
	this->_init();
	*this = src;
	std::cout << "Character copy constructor called" << std::endl;
	return ;
}

Character::~Character(void)
{
	int	i;

	i = 0;
	while(i < ITENS)
	{
		if(this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
		}
		i++;
	}
	std::cout << "Character Destructor" << std::endl;;
	return ;
}

Character & Character::operator=(Character const & rhs)
{
	int	i;
	
	this->_name = rhs.getName();
	i = 0;
	while(i < ITENS)
	{
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
		i++;
	}
	return(*this);
}

Character::Character(std::string name): _name(name)
{
	this->_init();
	std::cout << "Character Name Constructor" << std::endl;
	return;
}

void	Character::setName(std::string name)
{
	this->_name = name;
	return;	
}

std::string const & Character::getName() const
{
	return(this->_name);
}

void	Character::equip(AMateria* m)
{
	int	i;

	i = 0;
	while(i < ITENS)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout	<< this->getName()
						<< " equip index " 
						<< i 
						<< " materia " 
						<< this->_inventory[i]->getType()
						<< std::endl;
			return ;
		}
		i++;
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx])
	{
		std::cout	<< this->getName()
					<< " unequip index " << idx
					<< " materia "
					<< this->_inventory[idx]->getType() << std::endl;
		this->_inventory[idx] = NULL;
	}
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < ITENS && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	return ;
}

void 		Character::_init(void)
{
	int	i;

	i = 0;
	while(i < ITENS)
	{
		this->_inventory[i] = NULL;
		i++;
	}		
}

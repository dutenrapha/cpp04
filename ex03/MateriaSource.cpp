/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:42:14 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/13 17:54:57 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void)
{
	this->_init();
	std::cout << "MateriaSource Constructor" << std::endl;
	return;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	this->_init();
	*this = src;
	std::cout << "MateriaSource copy constructor called" << std::endl;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	std::cout << "MateriaSource Destructor" << std::endl;
	i = 0;
	while(i < ITENS)
	{
		if (this->_materials[i] != NULL)
		{
			delete this->_materials[i];
		}
		i++;
	}
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	int	i;

	if (this != &rhs)
	{
		i = 0;
		while(i < ITENS)
		{
			if (this->_materials[i] != NULL)
			{
				delete this->_materials[i];
			}
			if (rhs._materials[i] != NULL)
			{
				this->_materials[i] = rhs._materials[i]->clone();
			}
			else
			{
				this->_materials[i] = NULL;
			}
			i++;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i;
	i = 0;
	while(i < ITENS)
	{
		if (this->_materials[i] == NULL)
		{
			this->_materials[i] = m;
			return ;
		}
		i++;
	}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i;

	i = 0;
	while(i < ITENS && this->_materials[i])
	{
		if (this->_materials[i]->getType() == type)
		{
			return (this->_materials[i]->clone());	
		}
		i++;
	}
	return (NULL);
}

void 		MateriaSource::_init(void)
{
	int	i;

	i = 0;
	while(i < ITENS)
	{
		this->_materials[i] = NULL;
		i++;
	}
	return ;
}

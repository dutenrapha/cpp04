/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:22:41 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/13 17:58:13 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
	std::cout << "AMateria Constructor" << std::endl;
	return;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	std::cout << "AMateria copy constructor called" << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor" << std::endl;;
	return ;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria copy assigment called" << std::endl;
	(void)rhs;
	return(*this);
}

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria type Constructor" << std::endl;
	return;
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}
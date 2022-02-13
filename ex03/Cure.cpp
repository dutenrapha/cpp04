/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:25:46 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/13 17:54:25 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Constructor" << std::endl;
	return;
}

Cure::Cure(Cure const & src): AMateria("cure")
{
	*this = src;
	std::cout << "Cure copy constructor called" << std::endl;
	return ;	
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor" << std::endl;;
	return ;
}

Cure & Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure copy assigment called" << std::endl;
	(void)rhs;
	return(*this);
}

Cure		*Cure::clone(void) const
{
	return(new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout	<< "Cure: \"* heals " 
				<< target.getName()
				<< "’s wounds *\""
				<< std::endl;
	return ;	
}

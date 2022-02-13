/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:06:45 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/13 17:54:13 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Constructor" << std::endl;
	return;
}

Ice::Ice(Ice const & src): AMateria("ice")
{
	*this = src;
	std::cout << "Ice copy constructor called" << std::endl;
	return ;	
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor" << std::endl;;
	return ;
}

Ice & Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice copy assigment called" << std::endl;
	(void)rhs;
	return(*this);
}

Ice		*Ice::clone(void) const
{
	return(new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout	<< "Ice: \"* shoots an ice bolt at " 
				<< target.getName()
				<< " *\""
				<< std::endl;
	return ;	
}

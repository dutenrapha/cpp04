/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:03:49 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/10 23:06:30 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->set_type("WrongAnimal");
	std::cout << "WrongAnimal Constructor" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) : _type(src.get_type())
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor" << std::endl;;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal copy assigment constructor called" << std::endl;
	(void)rhs;
	return(*this);
}

const std::string	WrongAnimal::get_type(void)	const
{
	return(this->_type);
}

void				WrongAnimal::set_type(std::string type)
{
	this->_type  = type;
	return ;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout	<< this-> get_type()
				<< " made an WrongAnimal sound"
				<< std::endl;
}

std::ostream & operator<<(std::ostream & o, WrongAnimal const & src)
{
	o << "Type "<<src.get_type();
	return(o);
}

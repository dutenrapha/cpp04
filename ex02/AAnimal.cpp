/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:41:52 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 20:48:01 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->set_type("Animal");
	std::cout << "Animal Constructor" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const & src) : _type(src.get_type())
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal Destructor" << std::endl;;
	return ;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "Animal copy assigment constructor called" << std::endl;
	(void)rhs;
	return(*this);
}

const std::string	AAnimal::get_type(void)	const
{
	return(this->_type);
}

void				AAnimal::set_type(std::string type)
{
	this->_type  = type;
	return ;
}

void		AAnimal::makeSound(void) const
{
	std::cout	<< this-> get_type()
				<< " made an animal sound"
				<< std::endl;
}

void	AAnimal::getIdea(int index)
{
	(void)index;
	return ;
}

std::ostream & operator<<(std::ostream & o, AAnimal const & src)
{
	o << "Type "<<src.get_type();
	return(o);
}

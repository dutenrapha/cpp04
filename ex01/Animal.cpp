/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:41:52 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 20:48:01 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->set_type("Animal");
	std::cout << "Animal Constructor" << std::endl;
	return;
}

Animal::Animal(Animal const & src) : _type(src.get_type())
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor" << std::endl;;
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal copy assigment constructor called" << std::endl;
	(void)rhs;
	return(*this);
}

const std::string	Animal::get_type(void)	const
{
	return(this->_type);
}

void				Animal::set_type(std::string type)
{
	this->_type  = type;
	return ;
}

void		Animal::makeSound(void) const
{
	std::cout	<< this-> get_type()
				<< " made an animal sound"
				<< std::endl;
}

void	Animal::getIdea(int index)
{
	(void)index;
	return ;
}

std::ostream & operator<<(std::ostream & o, Animal const & src)
{
	o << "Type "<<src.get_type();
	return(o);
}

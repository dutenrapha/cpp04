/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:54:04 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/10 21:25:57 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->set_type("Dog");
	std::cout << "Dog Constructor" << std::endl;
	return;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor" << std::endl;;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog copy assigment constructor called" << std::endl;
	(void)rhs;
	return(*this);
}

void		Dog::makeSound(void) const
{
	std::cout	<< this-> get_type()
				<< " made an dog sound"
				<< std::endl;
}

std::ostream & operator<<(std::ostream & o, Dog const & src)
{
	o << "Type "<<src.get_type();
	return(o);
}

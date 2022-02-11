/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:54:04 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 21:19:50 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->set_type("Dog");
	this->_brain = new Brain;
	std::cout << "Dog Constructor" << std::endl;
	return;
}

Dog::Dog(Dog const & src) : AAnimal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor" << std::endl;
	delete this->_brain;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog copy assigment constructor called" << std::endl;
	this->_type = rhs.get_type();
	this->_brain = new Brain (*rhs.getBrain());
	return(*this);
}

void		Dog::makeSound(void) const
{
	std::cout	<< this-> get_type()
				<< " made an dog sound"
				<< std::endl;
}

Brain		*Dog::getBrain(void) const
{
	return(this->_brain);
}


void	Dog::getIdea(int index)
{
	std::cout	<< this->_brain->ideas[index]
				<< std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, Dog const & src)
{
	o << "Type "<<src.get_type();
	return(o);
}

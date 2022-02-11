/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:13:13 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 21:20:17 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->set_type("Cat");
	this->_brain = new Brain;
	std::cout << "Cat Constructor" << std::endl;
	return;
}

Cat::Cat(Cat const & src) : AAnimal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor" << std::endl;
	delete this->_brain;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat copy assigment constructor called" << std::endl;
	this->_type = rhs.get_type();
	this->_brain = new Brain (*rhs.getBrain());
	return(*this);
}

void		Cat::makeSound(void) const
{
	std::cout	<< this-> get_type()
				<< " made an cat sound"
				<< std::endl;
}

Brain		*Cat::getBrain(void) const
{
	return(this->_brain);
}

void	Cat::getIdea(int index)
{
	std::cout	<< this->_brain->ideas[index]
				<< std::endl;
	return ;
}

std::ostream & operator<<(std::ostream & o, Cat const & src)
{
	o << "Type "<<src.get_type();
	return(o);
}

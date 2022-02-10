/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:13:13 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/10 21:25:56 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->set_type("Cat");
	std::cout << "Cat Constructor" << std::endl;
	return;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor" << std::endl;;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat copy assigment constructor called" << std::endl;
	(void)rhs;
	return(*this);
}

void		Cat::makeSound(void) const
{
	std::cout	<< this-> get_type()
				<< " made an cat sound"
				<< std::endl;
}

std::ostream & operator<<(std::ostream & o, Cat const & src)
{
	o << "Type "<<src.get_type();
	return(o);
}

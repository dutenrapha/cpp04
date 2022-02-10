/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:02:58 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/10 23:09:03 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->set_type("WrongCat");
	std::cout << "WrongCat Constructor" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor" << std::endl;;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat copy assigment constructor called" << std::endl;
	(void)rhs;
	return(*this);
}

void		WrongCat::makeSound(void) const
{
	std::cout	<< this-> get_type()
				<< " made an WrongCat sound"
				<< std::endl;
}

std::ostream & operator<<(std::ostream & o, WrongCat const & src)
{
	o << "Type "<<src.get_type();
	return(o);
}

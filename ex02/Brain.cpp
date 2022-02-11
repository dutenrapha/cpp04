/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:11:55 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 21:09:57 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	int	i;
	std::string s;
	std::stringstream ss;

	i = 0;
	while (i < 100)
	{
		ss << i;
		s = ss.str();
		this->ideas[i] = "Ideia " + s;
		ss.str(std::string());
		i++;
	}
	
	std::cout << "Brain Constructor" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor" << std::endl;;
	return ;
}

Brain& Brain::operator=(Brain const & rhs)
{
	int	i;

	i = 0;
	while(i < 100)
	{
		this->ideas[i] = rhs.ideas[i];
		i++;
	}
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:54:02 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 20:45:07 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		Dog& operator=(Dog const & rhs);
		
		void	makeSound(void) const;
		void	getIdea(int index);
		Brain	*getBrain(void) const;
	private:
		Brain *_brain;
};

std::ostream & operator<<(std::ostream & o, Dog const & src);

#endif

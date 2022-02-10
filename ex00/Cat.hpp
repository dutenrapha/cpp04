/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:12:29 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/10 23:07:10 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
#include <iostream>

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);
		Cat& operator=(Cat const & rhs);
		
		void	makeSound(void) const;
};

std::ostream & operator<<(std::ostream & o, Cat const & src);

#endif

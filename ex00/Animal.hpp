/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:42:05 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/10 22:03:25 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal & operator=(Animal const & rhs);
		
		const std::string	get_type(void)	const;
		void				set_type(std::string type);
		virtual void		makeSound(void) const;
	
	protected:
		std::string _type;
};

std::ostream & operator<<(std::ostream & o, Animal const & src);

#endif

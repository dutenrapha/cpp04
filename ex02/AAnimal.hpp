/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:42:05 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 21:17:52 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H
#include <iostream>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal(void);
		AAnimal & operator=(AAnimal const & rhs);
		
		const std::string	get_type(void)	const;
		void				set_type(std::string type);
		virtual void		makeSound(void) const = 0;
		virtual void	getIdea(int index);
	protected:
		std::string _type;
};

std::ostream & operator<<(std::ostream & o, AAnimal const & src);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:42:07 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/13 17:43:38 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define ITENS 4

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource(void);
		MateriaSource & operator=(MateriaSource const & rhs);
		
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	
	private:
		AMateria*		_materials[ITENS];
		void 		_init(void);
};

#endif

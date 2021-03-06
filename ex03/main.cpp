/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:13:14 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/13 18:21:25 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	src->learnMateria(new Ice());
	std::cout << std::endl;

	src->learnMateria(new Cure());
	std::cout << std::endl;
	
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;

	me->use(0, *bob);
	std::cout << std::endl;

	me->use(1, *bob);
	std::cout << std::endl;
	
	me->use(2, *bob);
	std::cout << std::endl;
	
	me->use(3, *bob);
	std::cout << std::endl;
	
	me->use(4, *bob);
	std::cout << std::endl;
	delete bob;
	delete me;
	delete src;
	return(0);
}

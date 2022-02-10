/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:26:00 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/10 23:20:21 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	std::cout << std::endl  << std::endl;
	std::cout << "------WrongAnimal\\WrongCat------" << std::endl;
	const WrongAnimal* jj = new WrongAnimal();
	const WrongAnimal* ii = new WrongCat();
	std::cout << jj->get_type() << " " << std::endl;
	std::cout << ii->get_type() << " " << std::endl;
	ii->makeSound();
	jj->makeSound();
	delete ii;
	delete jj;
	
	return(0);
}
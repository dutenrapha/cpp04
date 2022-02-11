/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:26:00 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 21:22:25 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// AAnimal animal;
	// animal.makeSound();
	int	i;
	AAnimal *animals[14];

	i = 0;
	while(i < 7)
	{
		animals[i] = new Dog();
		i++;
	}
	while(i < 14)
	{
		animals[i] = new Cat();
		i++;
	}
	i = 0;
	while(i < 14)
	{
		animals[i]->makeSound();
		animals[i]->getIdea(i);
		i++;
	}
	
	i = 0;
	while(i < 14)
	{
		delete animals[i];
		i++;
	}
	return(0);
}
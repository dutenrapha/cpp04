/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:26:00 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 20:39:42 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	int	i;
	Animal *animals[14];

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
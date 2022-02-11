/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:11:49 by rdutenke          #+#    #+#             */
/*   Updated: 2022/02/11 20:32:35 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>


class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		Brain& operator=(Brain const & rhs);

		std::string ideas[100];
};

#endif

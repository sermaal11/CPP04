/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:28:14 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 21:29:00 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

// OCF
Brain::Brain()
{
	std::cout << CYAN << "[BRAIN] Default constructor called." << RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	std::cout << CYAN << "[BRAIN] Copy constructor called." << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
		std::cout << CYAN 
				<< "[BRAIN] Copy assignment operator called" 
				<< RESET << std::endl;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << RED << "[BRAIN] Destructor called." << RESET << std::endl;
}

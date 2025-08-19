/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:28:14 by sergio            #+#    #+#             */
/*   Updated: 2025/08/19 10:40:47 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
		std::cout << CYAN << "[Brain] Default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << CYAN << "[Brain] Copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << CYAN << "[Brain] Assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << CYAN << "[Brain] Default destructor called" << RESET << std::endl;
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index <= 100)
		this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index <= 100)
		return this->ideas[index];
	return "";
}
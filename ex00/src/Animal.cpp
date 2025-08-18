/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:08:22 by sergio            #+#    #+#             */
/*   Updated: 2025/08/18 12:54:13 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << CYAN << "[Animal] Default constructor called" << RESET << std::endl;
}

Animal::Animal(std::string animalType)
	: _type(animalType)
{
	std::cout << CYAN << "[Animal] Param constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& other)
	: _type(other._type)
{
	std::cout << CYAN << "[Animal] Copy constructor called" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << CYAN << "[Animal] Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << RED << "[Animal] Destructor called" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << MAGENTA << "* Generic animal sound *" << RESET << std::endl;
}

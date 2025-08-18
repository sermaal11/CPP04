/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:34:25 by sergio            #+#    #+#             */
/*   Updated: 2025/08/18 12:45:40 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << GREEN << "[Dog] Default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << GREEN << "[Dog] Copy constructor called" << RESET << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << GREEN << "[Dog] Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << RED << "[Dog] Destructor called" << RESET << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

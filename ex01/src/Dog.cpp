/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:12:32 by sergio            #+#    #+#             */
/*   Updated: 2025/08/19 14:59:25 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << GREEN << "[Dog] Default constructor called" << RESET << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << GREEN << "[Dog] Copy constructor called" << RESET << std::endl;
	this->brain = new Brain(*other.brain);
	this->_type = other._type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << GREEN << "[Dog] Assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		if (this->brain)
			delete this->brain;

		this->brain = new Brain(*other.brain);
		this->_type = other._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << RED << "[Dog] Destructor called" << RESET << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea)
{
	this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return this->brain->getIdea(index);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:11:38 by sergio            #+#    #+#             */
/*   Updated: 2025/08/19 12:09:40 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	this->brain = new Brain();
	std::cout << GREEN << "[Cat] Default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << GREEN << "[Cat] Copy constructor called" << RESET << std::endl;
	this->brain = new Brain(*other.brain);
	this->_type = other._type;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << GREEN << "[Cat] Assignment operator called" << RESET << std::endl;
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

Cat::~Cat()
{
	std::cout << RED << "[Cat] Destructor called" << RESET << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Meaw!" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea)
{
	this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return this->brain->getIdea(index);
}
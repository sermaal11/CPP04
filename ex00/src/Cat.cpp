/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:34:25 by sergio            #+#    #+#             */
/*   Updated: 2025/08/18 13:04:28 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << GREEN << "[Cat] Default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << GREEN << "[Cat] Copy constructor called" << RESET << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << GREEN << "[Cat] Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << RED << "[Cat] Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meaw!" << std::endl;
}

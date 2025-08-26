/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 10:54:49 by sergio            #+#    #+#             */
/*   Updated: 2025/08/26 11:03:16 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

// OCF
AAnimal::AAnimal() 
	: _type("AAnimal") 
{
	std::cout << "[AANIMAL] Default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) 
	: _type(other._type) 
{
	std::cout << "[AANIMAL] Copy constructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) 
{
    std::cout << "[AANIMAL] Copy assignment operator called." << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

AAnimal::~AAnimal() 
{
	std::cout << "[AANIMAL] Destructor called." << std::endl;
}

// Setter y Getter
void AAnimal::setType(const std::string& type)
{
	_type = type;
}

const std::string& AAnimal::getType() const 
{
	return _type;
}

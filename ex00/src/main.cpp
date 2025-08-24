/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:23:23 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 19:22:29 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
	// Prueba con Animal
	std::cout << std::endl;
	const Animal* metaAnimal = new Animal();
	std::cout << metaAnimal->getType() << " makes: ";
	metaAnimal->makeSound();
	delete metaAnimal;

	// Prueba con Dog
	std::cout << std::endl;
	const Animal* metaDog = new Dog();
	std::cout << metaDog->getType() << " makes: ";
	metaDog->makeSound();
	delete metaDog;

	// Prueba con Cat
	std::cout << std::endl;
	const Animal* metaCat = new Cat();
	std::cout << metaCat->getType() << " makes: ";
	metaCat->makeSound();
	delete metaCat;

	std::cout << std::endl;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:23:23 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 18:44:18 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
	Animal generic;
	std::cout << generic.getType() << " makes: " << std::endl;
	generic.makeSound();

	Animal copy(generic);
	std::cout << copy.getType() << " makes: " << std::endl;
	copy.makeSound();

	Animal assigment;
	assigment = generic;
	std::cout << assigment.getType() << " makes: " << std::endl;
	assigment.makeSound();
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:09:21 by sergio            #+#    #+#             */
/*   Updated: 2025/08/19 12:15:08 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/Brain.hpp"

int main()
{
	std::cout << "\n--- Test de copia profunda en Dog ---\n" << std::endl;

	Dog originalDog;
	originalDog.setIdea(0, "Cazar palomas");
	originalDog.setIdea(1, "Tomar siesta");
	originalDog.setIdea(42, "Oler cosas");
	originalDog.setIdea(99, "Esconder huesos");

	Dog copiedDog = originalDog;

	originalDog.setIdea(1, "Destruir la casa");
	originalDog.setIdea(99, "Jugar al escondite");

	std::cout << "\nIdeas del Dog original:\n";
	for (int i = 0; i < 100; ++i)
	{
		std::string idea = originalDog.getIdea(i);
		if (!idea.empty())
			std::cout << "Idea " << i << ": " << idea << std::endl;
	}

	std::cout << "\nIdeas del Dog copia:\n";
	for (int i = 0; i < 100; ++i)
	{
		std::string idea = copiedDog.getIdea(i);
		if (!idea.empty())
			std::cout << "Idea " << i << ": " << idea << std::endl;
	}

	std::cout << "\n--- Test de copia profunda en Cat ---\n" << std::endl;

	Cat originalCat;
	originalCat.setIdea(0, "Trepar cortinas");
	originalCat.setIdea(1, "Dormir en el teclado");
	originalCat.setIdea(13, "Cazar ratones");
	originalCat.setIdea(77, "Maullar a la nada");

	Cat copiedCat = originalCat;

	originalCat.setIdea(1, "Tirar vasos");
	originalCat.setIdea(77, "Esconderse en cajas");

	std::cout << "\nIdeas del Cat original:\n";
	for (int i = 0; i < 100; ++i)
	{
		std::string idea = originalCat.getIdea(i);
		if (!idea.empty())
			std::cout << "Idea " << i << ": " << idea << std::endl;
	}

	std::cout << "\nIdeas del Cat copia:\n";
	for (int i = 0; i < 100; ++i)
	{
		std::string idea = copiedCat.getIdea(i);
		if (!idea.empty())
			std::cout << "Idea " << i << ": " << idea << std::endl;
	}

	std::cout << "\n--- Fin del test ---\n" << std::endl;
	return 0;
}



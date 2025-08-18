/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:23:23 by sergio            #+#    #+#             */
/*   Updated: 2025/08/18 13:09:28 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
	 const Animal* defaultAnimal = new Animal();
	 const Animal* dog = new Dog();
	 const Animal* cat = new Cat();
	 std::cout << dog->getType() << " " << std::endl;
	 std::cout << cat->getType() << " " << std::endl;
	 defaultAnimal->makeSound();
	 dog->makeSound(); 
	 cat->makeSound(); //will output the cat sound!
	 delete defaultAnimal;
	 delete dog;
	 delete cat;
	 return 0;
}
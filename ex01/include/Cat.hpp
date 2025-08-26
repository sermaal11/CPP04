/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:11:20 by sergio            #+#    #+#             */
/*   Updated: 2025/08/24 21:33:24 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../include/Animal.hpp"
#include "../include/Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* _brain;
	
	public:
		//OCF
		Cat();								// Constructor x defecto
		Cat(const Cat& other);				// Constructor x copia
		Cat& operator=(const Cat& other);	// Operador de asignacion
		~Cat();								// Destructor

		//Metodos
		void makeSound() const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:55:06 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/07 16:22:07 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class _Array {

	private:
		T				*array;
		unsigned int	n;
	public:
		_Array(): n(0) {

			array = new T();
			std::cout << "array has been allocated" << std::endl;
		};
		_Array (unsigned int n): n(n) {

			array = new T[n]();
			std::cout << "array has been allocated using size" << std::endl;
		}
		_Array(const _Array& arr) {

			*this = arr;
			std::cout << "copy constructor " << std::endl;
		};
		~_Array() {
			delete [] array;
		};
		_Array&	operator=(const _Array& arr) {

			if (this != &arr)
			{
				std::cout << "here" << std::endl;
				delete [] array;
			}
			n = arr.n;
			array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				array[i] = arr.array[i];
			return (*this);
		}
		T&	operator[](unsigned int index) {

			if (index >= n)
				throw OutOfBoundsException();
			return (array[index]);
		};
		size_t	length() const {

			return (n);
		};
		class OutOfBoundsException: public std::exception {
			
			public:
				const char * what() const throw() {

					return ("Out of bounds");
				};
		} ;

} ;

#endif
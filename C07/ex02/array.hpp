/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:55:06 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/07 02:52:54 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class _Array {

	private:
		T				*array;
		unsigned int	n;
	public:
		_Array(): n(0) {
			array = new T;
			std::cout << "array has been allocated" << std::endl;
		};
		_Array (unsigned int n): n(n) {

			array = new T[n];
			std::cout << "array has been allocated using size" << std::endl;
		}
		_Array(const _Array& arr) {

			n = arr.n;
			array = new T[n];
			for (unsigned int i = 0; i < n; i++)
			{
				array[i] = arr.array[i];
			}
			std::cout << "copy constructor " << std::endl;
		};
		~_Array() {
			delete [] array;
		};
		_Array&	operator=(const _Array& arr) {

			if (this != &arr)
				delete [] array;
			n = arr.n;
			array = new T[n];
			for (unsigned int i = 0; i < n; i++)
			{
				array[i] = arr.array[i];
			}
		}
		int&	operator[](unsigned int index) {
			// if (index >= n)
				// throw OutOfBoundsException();
			return (array[index]);
		};
		size_t	length() const {
			return (n);
		};

} ;
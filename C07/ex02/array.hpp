/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:55:06 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/07 02:11:02 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class _Array {

	private:
		T				*array;
		unsigned int	n;
	public:
		_Array() {
			new array;
			std::cout << "array has been allocated" << std::endl;
		};
		_Array (unsigned int n) {

			new array[n];
			std::cout << "array has been allocated using size" << std::endl;
		}
		// _Array(const _Array& arr) {
			
		// };
		~_Array() {
			delete [] array;
		};
		int&	operator[](int index) {
			if (index >= n)
				std::cout << "index is out of bounds!" << std::endl;
			return (array[index]);
		};
		size_t	length() const {
			return (n);
		};

} ;
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:06:39 by eguelin           #+#    #+#             */
/*   Updated: 2023/12/08 18:34:47 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class Array
{
	public:

/* ************************************************************************** */
/*                                 Constructor                                */
/* ************************************************************************** */

		Array( void )
		{
			this->_array = new T[0];
			this->_size = 0;
		};

		Array( const Array &src )
		{
			if ( this != &src )
			{
				this->_array = new T[src._size];

				for (unsigned int i = 0; i < src._size; i++)
					this->_array[i] = src._array[i];

				this->_size = src._size;
			}
		};

		Array( unsigned int n )
		{
			this->_array = new T[n];
			this->_size = n;

			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0;
		};

/* ************************************************************************** */
/*                                 Destructor                                 */
/* ************************************************************************** */

		~Array( void )
		{
			delete[] this->_array;
		};

/* ************************************************************************** */
/*                              Operator overload                             */
/* ************************************************************************** */

		Array	&operator=( const Array &src )
		{
			if ( this != &src )
			{
				delete[] this->_array;
				this->_array = new T[src._size];

				for (unsigned int i = 0; i < src._size; i++)
					this->_array[i] = src._array[i];

				this->_size = src._size;
			}

			return (*this);
		}

		T	&operator[]( unsigned int index )
		{
			if (index >= this->_size)
				throw IndexOutOfRangeException();

			return (this->_array[index]);
		}

/* ************************************************************************** */
/*                                 Exceptions                                 */
/* ************************************************************************** */

		class	IndexOutOfRangeException: public std::exception
		{
			public:
				virtual const char	*what( void ) const throw()
				{
					return ("Index out of range");
				}
		};

/* ************************************************************************** */
/*                          Public members functions                          */
/* ************************************************************************** */

		unsigned int	size( void ) const
		{
			return (this->_size);
		}

	private:

		T				*_array;
		unsigned int	_size;
};

#endif

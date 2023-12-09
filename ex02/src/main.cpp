/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:48:04 by eguelin           #+#    #+#             */
/*   Updated: 2023/12/09 14:31:40 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	{
		Array<int *>	arrayInt(54);
		int				i = 0;

		try
		{
			arrayInt[0] = &i;

			Array<int *>	arrayInt2(arrayInt);

			arrayInt[0] = NULL;

			Array<int *>		arrayInt3;

			arrayInt3 = arrayInt;
			arrayInt[0] = &i;

			std::cout << "arrayInt[0]: " << arrayInt[0] << std::endl;
			std::cout << "arrayInt2[0]: " << arrayInt2[0] << std::endl;
			std::cout << "arrayInt3[0]: " << arrayInt3[0] << std::endl;
			std::cout << "arrayInt3[1]: " << arrayInt3[1] << std::endl;

			std::cout << "Size of arrayInt: " << arrayInt.size() << std::endl;
			std::cout << "Size of arrayInt2: " << arrayInt2.size() << std::endl;
			std::cout << "Size of arrayInt3: " << arrayInt3.size() << std::endl;

			arrayInt3[-1] = 0;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Array<int>	arrayInt(54);

		try
		{
			arrayInt[0] = 1;

			Array<int>	arrayInt2(arrayInt);

			arrayInt[0] = 1;

			Array<int>		arrayInt3;

			arrayInt3 = arrayInt;
			arrayInt[0] = 2;

			std::cout << "arrayInt[0]: " << arrayInt[0] << std::endl;
			std::cout << "arrayInt2[0]: " << arrayInt2[0] << std::endl;
			std::cout << "arrayInt3[0]: " << arrayInt3[0] << std::endl;
			std::cout << "arrayInt3[1]: " << arrayInt3[1] << std::endl;

			std::cout << "Size of arrayInt: " << arrayInt.size() << std::endl;
			std::cout << "Size of arrayInt2: " << arrayInt2.size() << std::endl;
			std::cout << "Size of arrayInt3: " << arrayInt3.size() << std::endl;

			arrayInt3[-1] = 0;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Array<char>	arrayChar(54);

		try
		{
			arrayChar[0] = 'a';

			Array<char>	arrayChar2(arrayChar);

			arrayChar[0] = 'b';

			Array<char>		arrayChar3;

			arrayChar3 = arrayChar;
			arrayChar[0] = 'c';

			std::cout << "arrayChar[0]: '" << arrayChar[0] << "'" << std::endl;
			std::cout << "arrayChar2[0]: '" << arrayChar2[0] << "'" << std::endl;
			std::cout << "arrayChar3[0]: '" << arrayChar3[0] << "'" << std::endl;
			std::cout << "arrayChar3[1]: '" << arrayChar3[1] << "'" << std::endl;

			std::cout << "Size of arrayChar: " << arrayChar.size() << std::endl;
			std::cout << "Size of arrayChar2: " << arrayChar2.size() << std::endl;
			std::cout << "Size of arrayChar3: " << arrayChar3.size() << std::endl;

			arrayChar3[-1] = 0;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}


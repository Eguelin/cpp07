/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:48:04 by eguelin           #+#    #+#             */
/*   Updated: 2024/02/07 18:51:59 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void )
{
	{
		Array<std::string>	arrayString(54);

		try
		{
			arrayString[0] = "Hello";

			Array<std::string>	arrayString2(arrayString);

			arrayString[0] = "World";

			Array<std::string>		arrayString3;

			arrayString3 = arrayString;

			arrayString[0] = "42";

			std::cout << "arrayString[0]: " << arrayString[0] << std::endl;
			std::cout << "arrayString2[0]: " << arrayString2[0] << std::endl;
			std::cout << "arrayString3[0]: " << arrayString3[0] << std::endl;
			std::cout << "arrayString3[1]: " << arrayString3[1] << std::endl;

			std::cout << "Size of arrayString: " << arrayString.size() << std::endl;
			std::cout << "Size of arrayString2: " << arrayString2.size() << std::endl;
			std::cout << "Size of arrayString3: " << arrayString3.size() << std::endl;

			arrayString3[-1] = "0";
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Array<int *>	arrayInt(54);
		for (size_t i = 0; i < arrayInt.size(); i++)
			arrayInt[i] = NULL;
		int				i = 0;

		try
		{
			arrayInt[0] = &i;

			Array<int *>	arrayInt2(arrayInt);
			for (size_t i = 0; i < arrayInt2.size(); i++)
				arrayInt2[i] = NULL;

			arrayInt[0] = NULL;

			Array<int *>		arrayInt3;
			for (size_t i = 0; i < arrayInt3.size(); i++)
				arrayInt3[i] = NULL;

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
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Array<int>	arrayInt(54);
		for (size_t i = 0; i < arrayInt.size(); i++)
			arrayInt[i] = 0;

		try
		{
			arrayInt[0] = 1;

			Array<int>	arrayInt2(arrayInt);
			for (size_t i = 0; i < arrayInt2.size(); i++)
				arrayInt2[i] = 0;

			arrayInt[0] = 1;

			Array<int>		arrayInt3;
			for (size_t i = 0; i < arrayInt3.size(); i++)
				arrayInt3[i] = 0;

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
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Array<char>	arrayChar(54);
		for (size_t i = 0; i < arrayChar.size(); i++)
			arrayChar[i] = '0';

		try
		{
			arrayChar[0] = 'a';

			Array<char>	arrayChar2(arrayChar);
			for (size_t i = 0; i < arrayChar2.size(); i++)
				arrayChar2[i] = '0';

			arrayChar[0] = 'b';

			Array<char>		arrayChar3;
			for (size_t i = 0; i < arrayChar3.size(); i++)
				arrayChar3[i] = '0';

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
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}


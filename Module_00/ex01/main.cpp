/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tumolabs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:59:10 by tumolabs          #+#    #+#             */
/*   Updated: 2023/06/12 14:12:58 by tumolabs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
// void	PhoneBook::Add()
// {

// }`

int main()
{
	PhoneBook PhoneBook;
	std::string str;
	std::cout << str << std::endl;

	while(true)
	{
		std::cout << "[ Imput phonebook commands ] --> ";
		std::getline (std::cin,str);
		if (!(str.compare("ADD")))
		{
			PhoneBook.Add();
		}
		else if (!(str.compare("SEARCH")))
		{
			PhoneBook.Search();
		}
		else if(!(str.compare("EXIT")))
			return (0);
		if (std::cin.eof())
		{
			return (0);
		}
		str.clear();
	}
	return (0);
}

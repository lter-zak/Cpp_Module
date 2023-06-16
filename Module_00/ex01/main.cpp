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
	PhoneBook PhoneBook1;
	std::string str;
	std::cout<<BOLD MAGENTA<< "\t\t  Welcome to PHONEBOOK\n"<<RESET<<std::endl;
	while(true)
	{
		std::cout<<BLUE<<"\t\t---Phonebook commands---\n"<<std::endl;
		std::cout<<BG_CYAN<<"\t[ ADD ]\t\t[ SEARCH ]\t[ EXIT ]"<<RESET<<std::endl<<std::endl;
		std::cout<<MAGENTA << "[ Input phonebook command ] --> ";
		std::getline (std::cin,str);
		if (!(str.compare("ADD")))
		{
			PhoneBook1.Add();
		}
		else if (!(str.compare("SEARCH")))
		{
			PhoneBook1.Search();
		}
		else if(!(str.compare("EXIT")))
		{
			str.clear();
			return (0);
		}
		if (std::cin.eof())
		{
			return (0);
		}
		str.clear();
	}
	return (0);
}

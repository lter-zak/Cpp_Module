/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <lter-zak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:59:10 by tumolabs          #+#    #+#             */
/*   Updated: 2023/06/19 15:21:47 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main()
{
	PhoneBook PhoneBook1;
	std::string str;
	std::cout<<BOLD<<MAGENTA<< "\t\t  Welcome to PHONEBOOK\n"<<RESET<<std::endl;
	while(true)
	{
		std::cout<<BLUE<<"\n\t\t---Phonebook commands---\n"<<std::endl;
		std::cout<<BG_CYAN<<"\t[ ADD ]\t\t[ SEARCH ]\t[ EXIT ]"<<RESET<<std::endl<<std::endl;
		std::cout<<MAGENTA << "[ Input phonebook command ] --> ";
		str.clear();
		std::getline (std::cin,str);
		if (std::cin.eof())
		{
			return (0);
		}
		else if (!(str.compare("ADD")))
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
	}
	return (0);
}

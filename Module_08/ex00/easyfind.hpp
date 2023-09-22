#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>

int easyfind(T arr, int num)
{
	for(int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == num)
			return(0);
	}
	throw "Occurrence is not found!!";
}

#endif
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>

int easyfind(const T& arr, int num)
{
	typename T::const_iterator c_it = arr.begin();
	for(; c_it != arr.end(); ++c_it)
	{
		if (*c_it == num)
		{
			std::cout << "Finded" << std::endl;
			return(0);
		}
	}
	throw "Occurrence is not found!!";
}


// template <typename T>
// int easyfind(const T& arr, int num)
// {
// 	typename T::const_iterator c_it = std::find(arr.begin(), arr.end(), num);
// 	if (c_it == arr.end()){
// 		throw "Occurrence is not found!!";
// 	}
// }


// template <typename It, typename T>
// It find(It begin, It end, T value)
// {
// 	while (begin != end) {
// 		if (*begin == value) {
// 			return begin;
// 		}
// 		++begin;
// 	}
// 	return end;
// }



#endif
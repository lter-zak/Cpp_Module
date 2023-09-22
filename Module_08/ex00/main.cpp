#include "easyfind.hpp"
#include <vector>

int main()
{
  	std::vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(20);
	numbers.push_back(30);
	try
	{
		easyfind(numbers, -5);
	}
	catch (const char* msg) {
    	std::cout << msg << std::endl;
   	}
}
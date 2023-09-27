#include "easyfind.hpp"
#include <vector>
#include <array>

int main()
{
  	std::vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);


	 std::array<int, 5> arr = {1, 3, 5, 7, 9};
	try
	{
		easyfind(arr, 10);
		//easyfind(numbers, 5);
	}
	catch (const char* msg) {
    	std::cout << msg << std::endl;
   	}
}
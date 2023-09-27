#include "Span.hpp"
#include <random>

int main()
{
	try
	{
		std::vector<int>	v;
		Span				sp(6);

		for (int i = 0; i < 5; i++)
			v.push_back(i + 10);
		sp.fillNumber(v.begin(), v.end()); 

		Span	sp1(5);
		sp1.addNumber(56);
		sp1.addNumber(20);
		sp1.addNumber(30);
		sp1.addNumber(9);
		sp1.addNumber(11);
	

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
		catch (const char* msg) {
			std::cout << msg << std::endl;
   	}
	return 0;
}
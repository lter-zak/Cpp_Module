#include "Span.hpp"
#include <random>

int main()
{
	
	//std::generate(v.begin(), v.end(), std::rand);
		
	

	try
	{
	//std::srand(unsigned(std::time(nullptr)));
	std::vector<int> v(1);
	// std::cout<<v.size()<<"+++++"<<std::endl;
	// for (int i = 0; i < 5; i++){
	// 	v.push_back(i+10);
	// 	//std::cout<<"+++++"<<std::endl;
	// }
		std::cout<<"_______"<<v[1]<<std::endl;


	//std::generate(v.begin(), v.end(), std::rand);
	 Span sp = Span(5);
		sp.fillNumber(v.begin(), v.end());  //sp._numbers.end() = v.begin()
		 //sp.addNumber(10);
		// sp.addNumber(20);
		// sp.addNumber(30);
		// sp.addNumber(9);
		// sp.addNumber(11);
		// std::cout<<"begin "<<*(v.begin())<<std::endl;
		// std::cout<<"end "<<*(v.end()-1)<<std::endl;
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	}
	catch (const char* msg) {
    	std::cout << msg << std::endl;
   	}
	return 0;
}
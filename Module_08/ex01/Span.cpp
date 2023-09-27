#include "Span.hpp"

Span::Span()
{
	std::cout<<"Default constructor called"<<std::endl;
	_n = 0;
}

Span::Span(unsigned int size)
{
	_n = size;
	std::cout<<"Parameterized constructor called"<<std::endl;
}

Span::~Span()
{
	std::cout<<"Destructor called"<<std::endl;
}

void Span::addNumber(unsigned int num)
{
//std::cout<<num<<"+++++++"<<std::endl;
	// if (_numbers.size() < _n)
	// {


	// 	_numbers.push_back(num);
	// }
	// else
	// 	throw "No space for the element in your container";
}


// template <typename T>
// void Span::fillNumber(T begin, T end)
// {
// 	 std::cout<<"Begin "<<*begin<<std::endl;
// }

// void Span::fillNumber(int count)
// {
// 	int tmp = count;
// 	std::vector<int>::const_iterator iter = _numbers.begin();
// 	std::vector<int>::const_iterator iterEnd = _numbers.end();
// 	// std::cout<<"-----"<<*(_numbers.end()-1)<<std::endl;
// 	if (count > _n)
// 		tmp = _n;
// 	int	arr[tmp];

// 	for (int i = 0; i < tmp; i++)
// 		arr[i] = i;
// 	for (iterEnd; iter != _numbers.end()  ; iter++)
// 		std::cout<<"_number = "<<*iter<<std::endl;
// 	for (; iter != _numbers.end()  ; iter++)
// 		std::cout<<"_number = "<<*iter<<std::endl;
// 	// for (iter; iter < _n -_numbers.size() )
// 	// 	_numbers.push_back(i);
// 	// for (int num : _numbers)
// 	// {
// 	// 	std::cout<<"Nu,"<<num<<std::endl;
// 	// 	//addNumber(3);
// 	// }
// }
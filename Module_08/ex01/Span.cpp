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

Span::Span(const Span& oldobj)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = oldobj;	
}

Span& Span::operator = (const Span& oldobj)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &oldobj)
	{
		_n = oldobj._n;
		_numbers = oldobj._numbers;
	}
	return (*this);
}

Span::~Span()
{
	std::cout<<"Destructor called"<<std::endl;
}

void Span::addNumber(unsigned int num)
{
	if (_numbers.size() < _n)
		_numbers.push_back(num);
	else
		throw "No space for the element in your container";
}



unsigned int Span::shortestSpan()
{
	if(_numbers.size()<=1)
		throw "Exception: there are no numbers stored,or only one";
	std::vector<int>::iterator	itr = _numbers.begin();
	unsigned int 				min = *(itr+1)-(*itr);

	std::sort(_numbers.begin(), _numbers.end());
	for( ; itr!=_numbers.end()-1; ++itr)
	{
		if(min > *(itr + 1) - *itr)
		{
			min = *(itr + 1) - *itr;
		}
	}
	return min;
}

unsigned int Span::longestSpan()
{
	if(_numbers.size()<=1)
		throw "Exception: there are no numbers stored,or only one";
	std::sort(_numbers.begin(), _numbers.end());
	return _numbers[_numbers.size() - 1] - _numbers[0];
}
#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <array>


class Span
{
	public :
		Span();
		Span(const Span& oldobj);
        Span& operator = (const Span& oldobj);	
		Span(unsigned int size);
		~Span();

		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNumber(unsigned int num);
	
		template <typename T>
		void fillNumber(T begin, T end)
		{
			while (begin != end) 
			{
				addNumber(*begin);
				//std::cout<<*begin<<std::endl;
				++begin;
			}
		};
	private :
		unsigned int		_n;
		std::vector<int>	_numbers;
};


#endif
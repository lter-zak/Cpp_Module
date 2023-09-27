#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <array>

typedef std::vector<unsigned int> Vector;

class Span
{
	public :
		Span();
		Span(unsigned int size);
		~Span();

		void addNumber(unsigned int num);
	
		// template <typename T>
		void fillNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) {
			while (begin != end) {
			std::cout<<"aaaaaaaa"<<std::endl;
				//addNumber(*begin);
				//std::cout<<*begin<<std::endl;
				++begin;
			}
		}
	private :
		unsigned int _n;
		Vector _numbers;
};


#endif
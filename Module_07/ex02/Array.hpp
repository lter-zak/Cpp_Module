#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename MyType>

class Array
{
	public:
		Array();
		Array(int n);
		Array(const Array& );
        Array& operator=(const Array&);
		std::size_t size () const;
		MyType& operator[](std::size_t);
		const	MyType& operator[](std::size_t) const;
		~Array();
	private:
		MyType*			_arr;
		std::size_t	_n;


	class PosException : public std::exception
    {
        public:
            const char * what () const throw();
    };
};

template <typename MyType>

Array<MyType>::Array() : _n(0)
{ 
	std::cout<<"Default constructor called"<<std::endl;
	_arr = new MyType[_n];
};

template <typename MyType>

Array<MyType>::Array(int n) 
{ 
	_n = n;
	_arr = new MyType[_n];
	std::cout<<"Parameterized constructor called"<<std::endl;
};

template<typename MyType>
Array<MyType>::Array(const Array& t) 
{ 
	_n = t._n;
	_arr = new MyType[_n];
	for(std::size_t i = 0; i < _n; i++)
	{
		_arr[i] = t._arr[i];
	}
	std::cout<<"Copy constructor called"<<std::endl;
};


template<typename MyType>
Array<MyType>& Array<MyType>::operator=(const Array& t) 
{ 
	if (this != &t)
    {
		_n = t._n;
			delete[] _arr;
		_arr = new MyType[_n];
		for(int i = 0; i< _n; i++)
		{
			_arr[i] = t._arr[i];
		}
    }
	std::cout<<"Assignment operator"<<std::endl;
	return (*this);
};


template <typename MyType>

MyType& Array<MyType>::operator[](std::size_t pos) 
{ 
	try{
		if (pos >= _n)
		throw PosException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return *(_arr + pos);
};

template <typename MyType>

const MyType& Array<MyType>::operator[](std::size_t pos) const
{ 
	try{
		if (pos >= _n)
		throw PosException();
	}
	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return *(_arr + pos);
};

template<typename MyType>
std::size_t Array<MyType>::size() const
{ 
	return _n;
};


template<typename MyType>
Array<MyType>::~Array()
{
    delete[] _arr;
	std::cout<<"Destructor called"<<std::endl;
}

template<typename MyType>

const char *Array<MyType>::PosException::what() const throw()
{
	return ("Invalid index");
}

#endif
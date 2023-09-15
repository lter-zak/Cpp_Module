#ifndef IMATERIASOURCE
#define IMATERIASOURCE

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

	private:
			AMateria *array[4];
		
};

#endif
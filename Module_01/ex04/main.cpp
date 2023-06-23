#include <fstream>

int main(int nb, char **str)
{
	(void)str;
	(void)nb;
	if ( nb == 3)
	{
		std::string fileName;
		std::string S1;
		std::string S2;

		fileName = str[1];
		S1		 = str[2];
		std::ofstream MyFile(fileName + ".replace");
		MyFile << "Files can be tricky, but it is fun enough!";
	}
	return (0);
}
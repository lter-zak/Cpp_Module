#include <fstream>
#include <iostream>

int main(int nb, char **str)
{
	(void)str;
	(void)nb;
	if ( nb == 4)
	{
		std::string		S1;
		std::string		S2;
		std::ifstream myFile;
		std::string fileStr;
		std::string nweFileName;
		std::ifstream oldFile;

		S1		 = str[2];
		S2		 = str[3];

		nweFileName = str[1];
		std::ofstream newFile(nweFileName + ".replace");
		oldFile.open ("test.txt");
		if(!oldFile) 
		{
			std::cerr << "Error: file could not be opened" <<std::endl;
			return(0);
		}
		else
		{
			while ( getline(oldFile, fileStr))
			{
				std::cout<<fileStr<<std::endl;
			}
		}
	}
	else
	{
		std::cerr << "not enaugh arguments" <<std::endl;
	}
		return (0);
}

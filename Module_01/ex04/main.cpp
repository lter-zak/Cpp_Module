// #include <fstream>
// #include <iostream>
#include "replace.hpp"
int main(int nb, char **str)
{
	(void)str;
	(void)nb;
	if ( nb == 4)
	{
		replace re(str[2], str[3], str[1]);
		//std::string		S1;
		//std::string		S2;
		//std::string		fileName;
		// std::string 	fileStr;
		// std::ifstream oldFile;

		// std::string inputStr;
		
		//int index;

		// S1		 = str[2];
		// S2		 = str[3];
		// fileName = str[1];
		//oldFile.open (str[1]);
		// if(!oldFile) 
		// {
		// 	std::cerr << "Error: file could not be opened";
		// 	return(0);
		// }
		// else
		// {
		// 	std::ofstream newFile(fileName + ".replace");
		// 	while (!oldFile.eof())
		// 	{
		// 		getline(oldFile, fileStr);
		// 		index = fileStr.find(S1);
		// 		std::cout<<"string = "<<fileStr<<std::endl;
		// 		while (index != -1)
		// 		{
		// 			std::cout<<"index = "<<index<<std::endl;
		// 			fileStr.erase(index, S1.length());
		// 			fileStr.insert(index, S2);
		// 			index = fileStr.find(S1);
		// 			std::cout<<"inputStr  = "<<fileStr<<std::endl;
		// 		}
		// 		newFile<<fileStr<< "\n";
		// 	}
		// }

		re.doTheJob();

	}
	else
	{
		std::cerr << "Not enaugh arguments" <<std::endl;
	}
	return (0);
}

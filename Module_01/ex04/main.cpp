#include <fstream>
#include <iostream>

int main(int nb, char **str)
{
	(void)str;
	(void)nb;
	//if ( nb == 4)
	//{
	// 	std::string		fileName;
	// 	std::string		S1;
	// 	std::string		S2;
	// 	//char c;
	// 	std::ofstream	MyFile;
	// 	std::ifstream	oldFile;

	// 	fileName = str[1];
	// 	S1		 = str[2];
	// 	S2		 = str[3];
	// 	oldFile.open("oldFile");
	// 	if(!oldFile) 
	// 	{ // file couldn't be opened
    //   		std::cerr << "Error: file could not be opened" <<std::endl;
	// 		return(0);
	// 	}
	// 	oldFile.is_open();
	// 	std::getline (oldFile, S1);
	// 	// oldFile>>S1;
	// 	std::cout << S1 << ": " << oldFile.tellg() << '\n';
	// 	// c =	oldFile.get();
	// 	// std::cout<<c;
	// 	//std::cout<<c<<std::endl;
	// 	// std::ofstream MyFile(fileName + ".replace");
	// 	//MyFile << "Files can be tricky, but it is fun enough!";
	// //}

	std::string output;
    std::ifstream myfile;
    std::ofstream myfile2;

   std::string STRING;
    myfile.open ("oldFile");

    //myfile2 << "Lucas, It Worked";

        myfile >> STRING;
        std::cout << STRING << std::endl;
		 myfile >> STRING;
        std::cout << STRING << std::endl;
    myfile.close();
	return (0);
}
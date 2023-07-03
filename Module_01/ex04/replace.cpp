#include "replace.hpp"

 replace::replace(std::string s1, std::string s2, std::string fileName)
 {
    _s1 = s1;
    _s2 = s2;
    _fileName = fileName;
 }

 replace::~replace(){}

 int replace::doTheJob()
 {
    int             index;
    std::string 	fileStr;
	std::ifstream   oldFile;

    oldFile.open (_fileName);
    if(!oldFile) 
    {
        std::cerr << "Error: file could not be opened";
        return(0);
    }
    else
    {
        std::ofstream newFile(_fileName + ".replace");
        while (!oldFile.eof())
        {
            getline(oldFile, fileStr);
            index = fileStr.find(_s1);
            while (index != -1)
            {
                fileStr.erase(index, _s1.length());
                fileStr.insert(index, _s2);
                index = fileStr.find(_s1);
            }
            newFile<<fileStr<< "\n";
        }
    }
    return(0);
 }
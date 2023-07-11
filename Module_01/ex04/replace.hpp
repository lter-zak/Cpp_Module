#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>


class Replace{
    public:
        Replace(std::string s1, std::string s2, std::string fileName);
        ~Replace();
        int doTheJob();
    private:
        std::string _s1;
        std::string _s2;
        std::string _fileName;
};

# endif
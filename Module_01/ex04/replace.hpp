#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>


class replace{
    public:
        replace(std::string s1, std::string s2, std::string fileName);
        ~replace();
        int doTheJob();
    private:
        std::string _s1;
        std::string _s2;
        std::string _fileName;
};

# endif
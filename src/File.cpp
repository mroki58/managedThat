#include "File.h"
#include <fstream>
#include <iostream>

void File::init(std::string name)
{
    _name = name;
}

void File::appendLineTxt(std::string text)
{

}

void File::append(const File & file)
{
    std::cout << "Append file to file\n";
    std::ifstream in(file._name);
    std::string token;
    while(std::getline(in, token))
    {
        std::cout << token << " line copied!\n";
        std::fstream out(this->_name,std::ios::app);
        out << "\n" + token;
    }
    in.close();
}

void File::deleteFile()
{

}
#include "File.h"
#include <fstream>
#include <iostream>

void File::init(std::string path)
{
    this->Object::init(path);
}

void File::appendLineTxt(std::string text)
{
    std::ofstream file(_name, std::ios::app);
    file << text << "\n";
    file.close();
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
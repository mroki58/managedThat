#include "File.h"
#include <fstream>
#include <iostream>

void File::init(std::string path)
{
    this->Object::init(path);

    std::ofstream file(_name, std::ios::app);
    if (file.is_open())
    {
        file.close();
    }
}

void File::appendLineTxt(std::string text)
{
    std::ofstream file(_name, std::ios::app);
    file << text << "\n";
    file.close();
    // simulate work for now
    std::cout << "Appended to file: " << _name << std::endl;
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
    //simulate work for now
    std::cout << "Work in progress..." << std::endl; 
}

void File::deleteFile()
{
    if (std::filesystem::exists(_name))
    {
        if (std::remove(_name.c_str()) == 0)
        {
            std::cout << "Plik został usunięty.\n";
        }
        else
        {
            std::cerr << "Nie udało się usunąć pliku.\n";
        }
    }
    else
    {
        std::cerr << "Plik nie istnieje.\n";
    }
}
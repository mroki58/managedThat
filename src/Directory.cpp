#include "Directory.h"

namespace fs = std::filesystem;

void Directory::init(std::string path)
{
    this->Object::init(path);
    
    if(std::filesystem::create_directory(_name))
    {
        std::cout << "Directory created succesfully and tracked" << std::endl;
    }else{
        if(std::filesystem::exists(_name))
        {
            std::cout << "Directory already exists now you track it" << std::endl;
        }else
        {
            std::cerr << "Something went wrong" << std::endl;
            throw 1;
        }
    }
}

void Directory::add(Object & object)
{
    
}

// throws exception
void Directory::move(Object &object)
{
    std::stringstream ss(object._name);
    std::string token;
    std::string nameOfFile;
    while (std::getline(ss, token, '/'));
    
    fs::path source(object._name);
    fs::path destination(this->_name + "/" + token);

    fs::rename(source, destination);
    object._name = this->_name + "/" + token;
}


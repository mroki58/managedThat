#include "Directory.h"

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

void Directory::move(Object & object)
{

}


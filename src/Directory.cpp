#include "Directory.h"

void Directory::init(std::string path)
{
    this->Object::init(path);          
}

void Directory::add(Object & object)
{

}

void Directory::move(Object & object)
{
    std::stringstream ss(object._name);
    std::string token;
    std::string nameOfFiles;
    while (std::getline(ss, token, "/"))
        ;

    fs::path source(object._name);
    fs::path destination(this->_name + '/' + token);

    fs::rename(source, destination);
    object._name = this->_name + "/" + token;
}


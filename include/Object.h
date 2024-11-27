#pragma once
#include <filesystem>

class Object{
public:
    Object(std::string name): _name(name) {}
    virtual void init(std::string path) = 0;

protected:
    std::string _name;

};
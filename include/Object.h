#pragma once
#include <filesystem>

class Object{
public:
    Object(std::string name): _name(name) {}
    void create() = 0;
    void remove() = 0;

protected:
    std::string _name;

};
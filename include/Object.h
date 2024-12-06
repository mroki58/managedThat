#pragma once
#include <filesystem>
#include <iostream>
#include <vector>

class Object{
public:
    friend class Directory;
    Object(std::string name): _name(name) {}
    virtual void init(std::string path) = 0;

protected:
    std::string _name;

};
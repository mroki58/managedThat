#pragma once
#include "Object.h"

class Directory: public Object{
public:
    Directory(std::string name): Object(name) {}
    void create();
    void add(Object & object);
    void remove();

};
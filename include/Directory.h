#pragma once
#include "Object.h"
#include <vector>

class Directory: public Object{
public:
    Directory(std::string name): Object(name) {}
    
    void init(std::string path) override;

    void add(Object & object);

    void move(Object & object);


};
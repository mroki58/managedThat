#pragma once
#include "Object.h"

class File: public Object{
public:
    File(std::string name): Object(name) {}
    void add();
    void appendLineTxt(std::string text);
    void append(const File & file);
    void remove();

private:
    std::string name;

};
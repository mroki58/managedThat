#pragma once
#include "Object.h"
#include <fstream>

class File: public Object{
public:
    File(std::string name): Object(name) {}
    void init(std::string path) override;

    void appendLineTxt(std::string text);

    void append(const File & file);

    void deleteFile();

private:
    std::string name;

};
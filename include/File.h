#pragma once
#include <vector>

class File{
public:
    void add();
    void appendLineTxt(std::string text);
    void append(const File & file);

private:
    std::string name;

};
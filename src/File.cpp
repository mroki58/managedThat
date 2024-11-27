#include "File.h"

void File::init(std::string path)
{
    this->Object::init(path);

    std::ofstream file(_name, std::ios::app);
    if (file.is_open())
    {
        file.close();
    }
}

void File::appendLineTxt(std::string text)
{
    std::ofstream file(_name, std::ios::app);
    file << text << "\n";
}

void File::append(const File & file)
{

}

void File::deleteFile()
{

}
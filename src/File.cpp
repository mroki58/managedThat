#include "File.h"

void File::init(std::string path)
{
    this->Object::init(path);
}

void File::appendLineTxt(std::string text)
{
    std::ofstream file(_name, std::ios::app);
    file << text << "\n";
    file.close();
}

void File::append(const File & file)
{
    std::ifstream infile(file._name);
    std::string temp;

    while (std::getline(infile, temp))
    {
        this->appendLineTxt(temp);
    }
}

void File::deleteFile()
{

}
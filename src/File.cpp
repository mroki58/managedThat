#include "File.h"

void File::init(std::string path)
{
    this->Object::init(path);

    std::ofstream file(_name, std::ios::out);
    if (!file.is_open())
    {
        std::cerr << "Nie udało się otworzyć pliku: " << path << std::endl;
    }else{
        std::cout << "Sledzisz plik: " << _name << std::endl;
        file.close();
    }
}

void File::appendLineTxt(std::string text)
{
    // simulate work for now
    std::cout << "Appended to file: " << _name << std::endl;
}

void File::append(const File & file)
{
    //simulate work for now
    std::cout << "Work in progress..." << std::endl; 
}

void File::deleteFile()
{
    if (std::filesystem::exists(_name))
    {
        if (std::remove(_name.c_str()) == 0)
        {
            std::cout << "Plik został usunięty.\n";
        }
        else
        {
            std::cerr << "Nie udało się usunąć pliku.\n";
        }
    }
    else
    {
        std::cerr << "Plik nie istnieje.\n";
    }
}
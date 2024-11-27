#pragma once
#include "Object.h"

class File: public Object{
public:
    File(std::string name): Object(name) {}
    /* Tworzy plik w danej lokalizacji lub zaczyna go sledzic*/
    void init(std::string path) override;

    /* dodaje linijke tekstu do pliku */
    void appendLineTxt(std::string text);

    /* dodaje zawartosc pliku na koncu drugiego pliku */
    void append(const File & file);

    /* usuwa plik */
    void deleteFile();

private:
    std::string name;

};
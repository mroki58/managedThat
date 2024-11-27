#include <iostream>
#include "File.h"
#include "Directory.h"


int main()
{
    File b1("nazwa_pliku.txt");
    b1.create();
    b1.appendLineTxt("Tekst do pliku b1");

    File b2("nazwa_pliku2.txt");
    b2.create();
    b1.appendLineTxt("Tekst do pliku b2");
    b1.append(b2);
    
    Directory d1("nazwa_folderu");
    d1.create();
    d1.add(b1);

    d1.remove();
}
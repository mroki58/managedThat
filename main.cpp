#include <iostream>
#include "File.h"
#include "Directory.h"


int main()
{
    File b1("nazwa_pliku.txt");
    b1.init("/home/igorsala/Pulpit/FolderTestowy");
    b1.appendLineTxt("Tekst do pliku b1");

    File b2("nazwa_pliku2.txt");
    b2.init("/home/igorsala/Pulpit/FolderTestowy");
    b1.appendLineTxt("Tekst do pliku b2");
    b1.appendLineTxt("Tekst do pliku b2 wiecej");
    b1.append(b2);
    b2.deleteFile();
    
    Directory d1("nazwa_folderu");
    d1.init("/home/igorsala/Pulpit/FolderTestowy");
    d1.move(b1);

}
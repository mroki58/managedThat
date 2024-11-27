#pragma once
#include "Object.h"

class Directory: public Object{
public:
    Directory(std::string name): Object(name) {}
    
    /* Bedzie tworzyc directory w okreslonym miejscu, 
       jezeli istnieje już katalog o danej nazwie w danej lokalizacji
       zacznie go sledzic  
    */
    void init(std::string path) override;

    /* Dodaje plik lub katalog do katalogu*/
    void add(Object & object);

    /*Usuwa z katalogu plik lub katalog rekursywnie*/
    void move(Object & object);


};
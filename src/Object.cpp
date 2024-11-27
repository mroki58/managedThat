#include "Object.h"

void Object::init(std::string path)
{
    _name = path + "/" + _name;
}
#include "StaticObject.h"
#include <iostream>
#include <string>

StaticObject::StaticObject() : Entity(Vector2(0,0)) {
}

StaticObject::StaticObject(float _x, float _y) : Entity(Vector2(_x, _y)) {
    std::cout << "Static Object just created at x = " << std::to_string(_x) << " and y = " << std::to_string(_y) << std::endl;
}
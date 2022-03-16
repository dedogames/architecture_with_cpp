#ifndef SQUARE_BAD_HPP
#define SQUARE_BAD_HPP
#include <iostream>
#include<ostream>
#include "Rectangle.hpp"
namespace Solid
{
    namespace LiskovSubstitution
    {
        namespace BadApplication
        {
            class Square : public Rectangle // Square isn't a rectangle
            {
            public:
                float get_area() override { return Rectangle::get_area(); }
            };
        }



    }
}
#endif
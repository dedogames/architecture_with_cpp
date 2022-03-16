#ifndef SQUARE_HPP
#define SQUARE_HPP
#include <iostream>
#include<ostream>
#include "IGeometricFigure.hpp"
namespace Solid
{
    namespace InterfaceSegregation
    {
        namespace GoodApplication
        {
            class Square : public IGeometricFigure
            {
            public:
                Square(float len) :m_length(len) {}
                float get_area() { return m_length * m_length; }
                virtual ~Square() = default;
            private:
                float m_length;
            };

        }
    }
}
#endif
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include <iostream>
#include<ostream>
#include "IGeometricFigure.hpp"
namespace Solid
{
    namespace InterfaceSegregation
    {
        namespace GoodApplication
        {
            class Rectangle : public IGeometricFigure
            {
            public:
                virtual ~Rectangle() = default;
                Rectangle(float w, float h) :m_width(w), m_height(h) {}

                float get_area() { return m_width * m_height; }

                virtual void set_width(float w) { m_width = w; }
                virtual void set_height(float h) { m_height = h; }

            private:
                float m_width;
                float m_height;
            };
        }
    }
}

#endif
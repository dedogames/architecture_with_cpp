#ifndef RECTANGLE_BAD_HPP
#define RECTANGLE_BAD_HPP

#include <iostream>
#include<ostream> 
namespace Solid
{
    namespace LiskovSubstitution
    {
        namespace BadApplication
        {
            class Rectangle
            {
            public:
                virtual ~Rectangle() = default;
                virtual float get_area() { return m_width * m_height; }
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
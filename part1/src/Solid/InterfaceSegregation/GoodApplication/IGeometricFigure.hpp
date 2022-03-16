#ifndef IGEOMETRIC_HPP
#define IGEOMETRIC_HPP
#include <iostream>
#include<ostream> 
namespace Solid
{
    namespace InterfaceSegregation
    {
        namespace GoodApplication
        {
            class IGeometricFigure
            {
            public:
                virtual float get_area() = 0;
            };

        }
    }
}

#endif
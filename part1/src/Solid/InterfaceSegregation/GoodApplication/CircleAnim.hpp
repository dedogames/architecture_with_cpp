#ifndef CIRCLE_ANIM_HPP
#define CIRCLE_ANIM_HPP
#include <iostream>
#include<ostream>
#include "IGeometricFigure.hpp"
#define _USE_MATH_DEFINES
#include <math.h>
#include "IAnimation.hpp"
namespace Solid
{
    namespace InterfaceSegregation
    {
        namespace GoodApplication
        {
            class CircleAnim : public IGeometricFigure, public IAnimation
            {
            public:
                CircleAnim(float radius) :m_radius(radius) {}
                float get_area() { return  M_PI * m_radius; }
                void play() override { std::cout << "start anim" << std::endl; }
                virtual ~CircleAnim() = default;
            private:
                float m_radius;
            };

        }
    }
}

#endif
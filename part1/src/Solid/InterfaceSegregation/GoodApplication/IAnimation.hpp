#ifndef IANIMATION_HPP
#define IANIMATION_HPP
#include <iostream>
#include<ostream> 
namespace Solid
{
    namespace InterfaceSegregation
    {
        namespace GoodApplication
        {
            class IAnimation
            {
            public:
                virtual void play() = 0;
            };
        }
    }
}

#endif
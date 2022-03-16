#ifndef FRONT_END_DEVELOPER_HPP
#define FRONT_END_DEVELOPER_HPP

namespace Solid
{
    namespace DependencyInversion
    {
        class FrontEndDeveloper
        {
        public:
            void develop() { std::cout << "DependencyInversion::FrontEndDeveloper::develop:: |  I'll create some pages" << std::endl; }
        };
    }
}
#endif
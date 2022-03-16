#ifndef BACK_END_DEVELOPER_HPP
#define BACK_END_DEVELOPER_HPP
namespace Solid
{
    namespace DependencyInversion
    {
        class BackEndDeveloper
        {
        public:
            void develop() { std::cout << "DependencyInversion::BackEndDeveloper::develop:: | I'll create some pages" << std::endl; }
        };
    }

}

#endif
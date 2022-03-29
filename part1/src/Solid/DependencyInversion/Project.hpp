#ifndef PROJECT_HPP
#define PROJECT_HPP
#include<vector>
#include<variant>

namespace Solid
{
    namespace DependencyInversion
    {
        template<typename ... Devs>
        class Project
        {
        public:
            using Developers = std::vector<std::variant<Devs...>>;

            explicit Project(Developers developers) :m_developers(developers), m_count_developers(0) {}
            void deliver()
            {
                for (auto& developer : m_developers)
                {
                    std::visit([](auto& dev)
                        {dev.develop(); }, developer
                    );
                    ++m_count_developers;
                }
            }
            int get_count_developers()
            {
                return m_count_developers;
            }
        private:
            Developers m_developers;
            int m_count_developers;
        };
    }
}
#endif
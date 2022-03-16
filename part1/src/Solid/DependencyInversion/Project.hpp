#ifndef PROJECT_HPP
#define PROJECT_HPP
#include<vector>
#include<variant>

namespace Solid
{
    template<typename ... Devs>
    class Project
    {
    public:
        using Developers = std::vector<std::variant<Devs...>>;

        explicit Project(Developers developers) :m_developers(developers) {}
    private:
        Developers m_developers;
    };
}
/*
using MyProject = Project<FrontEndDeveloper, BackEndDeveloper>;
auto alice = FrontEndDeveloper{};
auto bob = BackEndDeveloper{};
auto new_project = MyProject{{alice, bob}};
new_project.deliver();


*/
#endif
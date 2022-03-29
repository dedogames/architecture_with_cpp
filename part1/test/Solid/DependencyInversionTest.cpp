#include "gtest/gtest.h"

#include "../../src/Solid/DependencyInversion/BackEndDeveloper.hpp"
#include "../../src/Solid/DependencyInversion/FrontEndDeveloper.hpp"
#include "../../src/Solid/DependencyInversion/Project.hpp"

using namespace Solid::DependencyInversion;
TEST(DependencyInversion_TEST, DecouplingWithoutPolymorphism)
{
    using MyProject = Project<FrontEndDeveloper, BackEndDeveloper>;
    auto l_jhon = FrontEndDeveloper{};
    auto l_maria = BackEndDeveloper{};
    auto l_new_project = MyProject{ {l_jhon, l_maria} };
    l_new_project.deliver();
    const int NUMBER_OF_DEVELOPERS(2);
    EXPECT_EQ(l_new_project.get_count_developers(), NUMBER_OF_DEVELOPERS);
}
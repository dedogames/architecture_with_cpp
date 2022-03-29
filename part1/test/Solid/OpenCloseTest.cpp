#include "gtest/gtest.h"
#include "../src/Solid/OpenClose/MPair.hpp"
#include <string>
#include<sstream>

TEST(OpenClose_TEST, CustonPair)
{
    int l_value = 1;
    std::string l_first("value");
    Solid::OpenClose::MPair<std::string, int> l_pair(l_first, l_value);
    std::string l_expected_output("value , 1 , 1001");
    std::ostringstream l_ost;
    l_ost << l_pair;

    EXPECT_EQ(l_ost.str(), l_expected_output);


}
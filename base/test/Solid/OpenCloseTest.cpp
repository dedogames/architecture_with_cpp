#include "gtest/gtest.h"
#include<string>
#include<sstream>
#include "../../src/Solid/OpenClose/MPair.hpp"

TEST(OpenClose_TEST, CustonPair)
{
    int l_value = 1;
    std::string l_first("value");
    Solid::OpenClose::MPair<std::string, int> l_pair(l_first, l_value);
    std::string l_expteded_output("value , 1 , 1001");
    std::ostringstream os;
    os << l_pair;
    EXPECT_EQ(os.str(), l_expteded_output);

}
#include "gtest/gtest.h"
#include "../src/Solid/OpenClose/MPair.hpp"
#include <string>
#include<sstream>

TEST(OpenClose_TEST, CustonPair)
{
    int value = 1;
    std::string l_first("value");
    Solid::OpenClose::MPair<std::string, int> l_pair(l_first, value);
    std::string l_expteded_output("value , 1 , 1001");
    std::ostringstream os;
    os << l_pair;
    EXPECT_EQ(os.str(), l_expteded_output);


}
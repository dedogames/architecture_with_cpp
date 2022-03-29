#include "gtest/gtest.h"
#include "../../src/Solid/LiskovSubstitution/BadApplication/Rectangle.hpp"
#include "../../src/Solid/LiskovSubstitution/BadApplication/Square.hpp" 


TEST(LiskovSubstitution_TEST, BadApplication)
{
    Solid::LiskovSubstitution::BadApplication::Rectangle l_rect{};
    l_rect.set_width(50.0f);
    l_rect.set_height(100.0f);
    /*
    * Area Rectangle = Base * heigh
    */

    EXPECT_EQ(l_rect.get_area(), 50.0f * 100.0f);

    Solid::LiskovSubstitution::BadApplication::Square l_square{};
    l_square.set_width(50.0f);
    l_square.set_height(100.0f);
    /*
    * Area Square = Side * Side
    */
    EXPECT_EQ(l_square.get_area(), 50.0f * 100.0f);


}
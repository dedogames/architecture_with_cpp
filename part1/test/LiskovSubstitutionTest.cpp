#include "gtest/gtest.h"
#include "../src/Solid/LiskovSubstitution/BadApplication/Rectangle.hpp"
#include "../src/Solid/LiskovSubstitution/BadApplication/Square.hpp" 


TEST(LiskovSubstitution_TEST, BadApplication)
{
    Solid::LiskovSubstitution::BadApplication::Rectangle l_rect{};
    l_rect.set_width(50.0f);
    l_rect.set_height(100.0f);


    Solid::LiskovSubstitution::BadApplication::Square l_square{};
    l_square.set_width(5.0f);
    l_square.set_height(6.0f);

    EXPECT_EQ(l_rect.get_area(), 50.0f * 100.0f);

    EXPECT_FALSE(l_square.get_area() == (5.0f * 5.0f));
    EXPECT_FALSE(l_square.get_area() == (6.0f * 6.0f));


}
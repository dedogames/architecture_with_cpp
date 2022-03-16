#include "gtest/gtest.h"

#include "../src/Solid/InterfaceSegregation/GoodApplication/CircleAnim.hpp"
#include "../src/Solid/InterfaceSegregation/GoodApplication/IAnimation.hpp"
#include "../src/Solid/InterfaceSegregation/GoodApplication/IGeometricFigure.hpp"
#include "../src/Solid/InterfaceSegregation/GoodApplication/Rectangle.hpp"
#include "../src/Solid/InterfaceSegregation/GoodApplication/Square.hpp"
#include <memory>

using namespace  Solid::InterfaceSegregation::GoodApplication;
TEST(InterfaceSegregation_TEST, GoodApplication)
{
    using IGometricFigurePtr = std::unique_ptr<IGeometricFigure>;
    IGometricFigurePtr l_shape;
    l_shape = IGometricFigurePtr(new Rectangle{ 100.0f, 50.0f });
    EXPECT_EQ(l_shape->get_area(), 100.0f * 50.0f);

    l_shape = IGometricFigurePtr(new Square{ 35.0f });
    EXPECT_EQ(l_shape->get_area(), 35.0f * 35.0f);

    l_shape = IGometricFigurePtr(new CircleAnim{ 2.0f });
    EXPECT_EQ(l_shape->get_area(), 2.0f * 3.14159265358979323846f);

}
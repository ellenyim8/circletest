#include "Circle.h"
#include <gtest/gtest.h>

TEST(Area, AreaIsCorrect)
{
        Circle circ;

        circ.set_radius(3);
        EXPECT_DOUBLE_EQ(circ.area(), 3 * 3 * M_PI);
        ASSERT_NEAR(circ.area(), 28.274333, 0.3); 
	//ASSERT_EXIT(AreaIsCorrect, ::testing::ExitedWithCode(0), "Success");
}

TEST(Perimeter, PerimeterIsCorrect)
{
        Circle c;
        c.set_radius(4);
        ASSERT_EQ(c.get_radius(), 4);
        EXPECT_DOUBLE_EQ(c.perimeter(), 2 * M_PI * 4);
        ASSERT_NEAR(c.perimeter(), 25.13274122, 0.1);
	//ASSERT_EXIT(PerimeterIsCorrect, ::testing::ExitedWithCode(0), "Success");
}

TEST(Radius, ValidRadius)
{
        Circle c;

        c.set_radius(5);
        ASSERT_EQ(c.get_radius(), 5);
        exit(1);
	//ASSERT_EXIT(ValidRadius, ::testing::ExitedWithCode(0), "Success");
}

int main(int ac, char* av[])
{
        testing::InitGoogleTest(&ac, av);
        return RUN_ALL_TESTS();
}



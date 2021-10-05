#include "Circle.h"
#include <gtest/gtest.h>

TEST(Area, AreaIsCorrect)
{
        Circle circ;

        circ.set_radius(3);
        EXPECT_DOUBLE_EQ(circ.area(), 3 * 3 * M_PI);
        ASSERT_NEAR(circ.area(), 28.274333, 0.3); 
	//EXPECT_DEATH(::testing::ExitedWithCode(0), "");
}

TEST(Perimeter, PerimeterIsCorrect)
{
        Circle c;
        c.set_radius(4);
        ASSERT_EQ(c.get_radius(), 4);
        EXPECT_DOUBLE_EQ(c.perimeter(), 2 * M_PI * 4);
        ASSERT_NEAR(c.perimeter(), 25.13274122, 0.1);
	
}

TEST(Radius, ValidRadius)
{
        Circle c;

        c.set_radius(5);
        ASSERT_EQ(c.get_radius(), 5);
        exit(1);
	EXPECT_DEATH(::testing::ExitedWithCode(0), "");	

}

int main(int ac, char* av[])
{
        testing::InitGoogleTest(&ac, av);
        return RUN_ALL_TESTS();
}



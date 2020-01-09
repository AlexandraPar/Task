#include <gtest.h>
#include "circles.h"

TEST(Circles, CirclesDefaultFile) {
    EXPECT_NE(circles("..\\..\\examples\\task.txt"), -1);
};

TEST(Circles, FindingTheBiggestWithoutIntersections) {
    ASSERT_EQ(circles("..\\..\\examples\\emptest.txt"), -1);
};

TEST(Circles, FileDoNotOpen) {
    ASSERT_EQ(circles("..\\..\\wrong.txt"), -1);
};
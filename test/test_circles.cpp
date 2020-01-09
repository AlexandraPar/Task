#include <gtest.h>
#include "circles.h"

TEST(Circles, CirclesDefaultFile) {
    EXPECT_NE(circles("D:\\mp2-lab1-set-master\\examples\\task.txt"), -1);
};

TEST(Circles, FindingTheBiggestWithoutIntersections) {
    ASSERT_EQ(circles("D:\\mp2-lab1-set-master\\examples\\emptest.txt"), -1);
};

TEST(Circles, FileDoNotOpen) {
    ASSERT_EQ(circles("D:\\task.txt"), -1);
};
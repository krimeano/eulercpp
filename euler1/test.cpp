#include <iostream>
//include the google test dependencies
#include <gtest/gtest.h>
#include "solution1.h"

TEST(IntegerInputsSuite, taskExample)
{   Solution1 testSolution = Solution1(10);
    EXPECT_EQ(testSolution.solve(), 23) << "SOLUTION IS NOT CORRECT";
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
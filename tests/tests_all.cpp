#include "func.h"
#include "gtest/gtest.h"

TEST(MYFUNC_SUM, ZERO_PLUS_ZERO_IS_ZERO) {
    ASSERT_EQ(myfunc::sum(0, 0), 0);
}

TEST(MYFUNC_SUM, SUM_10_M10) {
    ASSERT_EQ(myfunc::sum(10, -10), 0);
}

TEST(MYFUNC_SUM, SUM_15_M10) {
    ASSERT_NE(myfunc::sum(15, -10), 0);
}
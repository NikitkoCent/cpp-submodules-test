#include "../func.h"
#include "gtest/gtest.h"

TEST(MYFUNC_SUM, ZERO_PLUS_ZERO_IS_ZERO) {
    ASSERT_EQ(myfunc::sum(0, 0), 0);
}
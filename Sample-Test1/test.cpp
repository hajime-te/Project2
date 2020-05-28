#include "pch.h"
#include "../header.h"

TEST(TestCaseName, TestName) {
    MyClass my = MyClass();
    my.hello();
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
#include <gtest/gtest.h>

#include <MyClass.hpp>

TEST(MyClass, MyClassSum) {
    MyClass myClass{};
    EXPECT_EQ(3, myClass.Sum(1, 2));
}
#include <gtest/gtest.h>
#include "SimpleClass.h"

TEST(ClassTest, Base) {
    SimpleClass simpleClass(3, "string");
    
    EXPECT_EQ(3, simpleClass.getIntField());
    EXPECT_EQ("string", simpleClass.getStringField());
}
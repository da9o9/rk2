#include "../Builder.cpp"
#include "gtest/gtest.h"

TEST(BuilderTest, DifferentProductsWithBuilders) {
  Director director;

  director.set(new ConcreteBuilderX);
  director.construct();
  Product productX = director.get();
  EXPECT_EQ(productX.get(), "A-X B-X C-X");

  director.set(new ConcreteBuilderY);
  director.construct();
  Product productY = director.get();
  EXPECT_EQ(productY.get(), "A-Y B-Y C-Y");
}

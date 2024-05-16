#include "../Builder.cpp"
#include "gtest/gtest.h"

TEST(BuilderTest, ProductConstruction) {

  ConcreteBuilderX builderX;
  builderX.buildPartA();
  builderX.buildPartB();
  builderX.buildPartC();
  Product productX = builderX.get();

  EXPECT_EQ(productX.get(), "A-X B-X C-X");
}

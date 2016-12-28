//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "singleton.h"

class SingletonFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  SingletonFixture(): Test() {
    instance1_ = Singleton::GetInstance();
    instance2_ = Singleton::GetInstance();
  }

  virtual ~SingletonFixture() {
    delete instance1_;
    if(instance1_ != instance2_){
      delete instance2_;
    }
  }

  Singleton* instance1_;
  Singleton* instance2_;
};

TEST_F(SingletonFixture, singleton_test) {
  EXPECT_EQ(instance1_, instance2_);
}
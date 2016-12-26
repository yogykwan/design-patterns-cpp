//
// Created by Jennica on 2016/12/23.
//


#include "gtest/gtest.h"
#include "factory_method.h"

class FactoryMethodFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  FactoryMethodFixture(): Test() {
    // use undergraduate to do chores
    i_factory_ = new UndergraduateFactory();
    leifeng_ = i_factory_->CreateLeiFeng();
    leifeng_->Wash();

    // use volunteer to do chores
    i_factory_ = new VolunteerFactory();
    leifeng_ = i_factory_->CreateLeiFeng();
    leifeng_->Wash();
  }

  virtual ~FactoryMethodFixture() {
    delete i_factory_;
    delete leifeng_;
  }

  IFactory* i_factory_;
  LeiFeng* leifeng_;
};

TEST_F(FactoryMethodFixture, factory_method_test) {

}
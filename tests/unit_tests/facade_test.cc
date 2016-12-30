//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "facade.h"

class FacadeFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  FacadeFixture(): Test() {
    fund_ = new Fund;
    fund_->BuyFund();
    fund_->SellFund();
  }

  virtual ~FacadeFixture() {
    delete fund_;
  }

  Fund *fund_;
};

TEST_F(FacadeFixture, _test) {
}
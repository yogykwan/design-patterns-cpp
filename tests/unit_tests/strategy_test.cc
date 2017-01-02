//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "strategy.h"

class StrategyFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  StrategyFixture(): Test() {
    cash_context_ = new CashContext("rebate", "0.8");
    cash_context_->GetResult(1000);

    cash_context_ = new CashContext("return", "300 100");
    cash_context_->GetResult(1000);
  }

  virtual ~StrategyFixture() {
    delete cash_context_;
  }

  CashContext *cash_context_;
};

TEST_F(StrategyFixture, strategy_test) {
}
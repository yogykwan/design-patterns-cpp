//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "state.h"

class StateFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  StateFixture(): Test() {
    work_ = new Work();

    work_->hour_ = 15;
    work_->WriteProgram();

    work_->hour_ = 20;
    work_->finished_ = false;
    work_->WriteProgram();

    work_->hour_ = 22;
    work_->WriteProgram();

    delete work_;
    work_ = new Work();
    work_->hour_ = 20;
    work_->finished_ = true;
    work_->WriteProgram();
  }

  virtual ~StateFixture() {
    delete work_;
  }

  Work *work_;
};

TEST_F(StateFixture, state_test) {
}
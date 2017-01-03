//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "command.h"

class CommandFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  CommandFixture(): Test() {
    barbecuer_ = new Barbecuer();
    bake_mutton_command1_ = new BakeMuttonCommand(barbecuer_);
    bake_mutton_command2_ = new BakeMuttonCommand(barbecuer_);
    bake_chicken_command_ = new BakeChickenCommand(barbecuer_);
    waiter_ = new Waiter();
    waiter_->SetOrder(bake_mutton_command1_);
    waiter_->SetOrder(bake_mutton_command2_);
    waiter_->SetOrder(bake_chicken_command_);
    waiter_->CancelOrder(bake_mutton_command2_);
    waiter_->Notify();
  }

  virtual ~CommandFixture() {
    delete barbecuer_;
    delete bake_mutton_command1_;
    delete bake_mutton_command2_;
    delete bake_chicken_command_;
    delete waiter_;
  }

  Barbecuer *barbecuer_;
  Command *bake_mutton_command1_;
  Command *bake_mutton_command2_;
  Command *bake_chicken_command_;
  Waiter *waiter_;
};

TEST_F(CommandFixture, command_test) {
}
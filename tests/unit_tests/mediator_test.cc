//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "mediator.h"

class MediatorFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  MediatorFixture(): Test() {
    unsc_ = new UnitedNationsSecurityCouncil();
    usa_ = new Usa(unsc_);
    iraq_ = new Iraq(unsc_);
    unsc_->SetUsa(usa_);
    unsc_->SetIraq(iraq_);
    usa_->Declare("Stop nuclear weapons");
    iraq_->Declare("No nuclear here");
  }

  virtual ~MediatorFixture() {
    delete unsc_;
    delete usa_;
    delete iraq_;
  }

  UnitedNationsSecurityCouncil *unsc_;
  Country *usa_;
  Country *iraq_;
};

TEST_F(MediatorFixture, mediator_test) {
}
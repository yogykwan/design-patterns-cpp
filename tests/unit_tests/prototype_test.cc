//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "prototype.h"

class PrototypeFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  PrototypeFixture(): Test() {
    resume1_ = new Resume("Bob");
    resume1_->SetPersonalInfo("M", "24");
    resume1_->SetWorkExperience("Google", "2015~2017");
    resume2_ = resume1_->Clone();
    resume1_->PrintResume();
    resume2_->PrintResume();
    resume2_->SetPersonalInfo("F", "23");
    resume1_->PrintResume();
    resume2_->PrintResume();
    resume2_->SetWorkExperience("Twitter", "2016~2017");
    resume1_->PrintResume();
    resume2_->PrintResume();
    resume1_->SetWorkExperience("Amazon", "2015-2017");
    resume1_->PrintResume();
    resume2_->PrintResume();
  }

  virtual ~PrototypeFixture() {
    delete resume1_;
    delete resume2_;
  }

  Resume *resume1_;
  Resume *resume2_;
};

TEST_F(PrototypeFixture, prototype_test) {
}
//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "visitor.h"

class VisitorFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  VisitorFixture(): Test() {
    man_ = new Man();
    woman_ = new Woman();
    object_structure_ = new ObjectStructure();
    success_ = new Success();
    failure_ = new Failure();
    object_structure_->Attach(man_);
    object_structure_->Attach(woman_);
    object_structure_->Display(success_);
    object_structure_->Display(failure_);
  }

  virtual ~VisitorFixture() {
    delete man_;
    delete woman_;
    delete object_structure_;
    delete success_;
    delete failure_;
  }

  Person *man_;
  Person *woman_;
  ObjectStructure *object_structure_;
  Action *success_;
  Action *failure_;
};

TEST_F(VisitorFixture, visitor_test) {
}
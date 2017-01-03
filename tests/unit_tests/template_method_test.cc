//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "template_method.h"

class TemplateMethodFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  TemplateMethodFixture(): Test() {
    test_paper_a_ = new TestPaperA();
    test_paper_a_->Question1();
    test_paper_a_->Question2();
    test_paper_a_->Question3();

    test_paper_b_ = new TestPaperB();
    test_paper_b_->Question1();
    test_paper_b_->Question2();
    test_paper_b_->Question3();
  }

  virtual ~TemplateMethodFixture() {

  }

  TestPaper *test_paper_a_;
  TestPaper *test_paper_b_;
};

TEST_F(TemplateMethodFixture, template_method_test) {
}
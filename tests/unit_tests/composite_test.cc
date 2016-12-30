//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "composite.h"

class CompositeFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  CompositeFixture(): Test() {
    beijing_head_office_ = new ConcreteCompany("Beijing Head Office");
    beijing_head_office_->Add(new HrDepartment("Beijing HR Department"));
    beijing_head_office_->Add(new FinanceDepartment("Beijing Finance Department"));

    huadong_branch_office_ = new ConcreteCompany("Huadong Branch Office");
    huadong_branch_office_->Add(new HrDepartment("Huadong HR Department"));
    huadong_branch_office_->Add(new FinanceDepartment("Huadong Finance Department"));
    beijing_head_office_->Add(huadong_branch_office_);

    nanjing_office_ = new ConcreteCompany("Nangjing Office");
    nanjing_office_->Add(new HrDepartment("Nanjing HR Department"));
    nanjing_office_->Add(new FinanceDepartment("Nanjing Finance Department"));
    huadong_branch_office_->Add(nanjing_office_);

    hangzhou_office_ = new ConcreteCompany("Nangjing Office");
    hangzhou_office_->Add(new HrDepartment("Hangzhou HR Department"));
    hangzhou_office_->Add(new FinanceDepartment("Hangzhou Finance Department"));
    huadong_branch_office_->Add(hangzhou_office_);

    std::cout << "Structure Tree:" << std::endl;
    beijing_head_office_->Display(0);

    std::cout << "Duty Lines:" << std::endl;
    beijing_head_office_->LineOfDuty();
  }

  virtual ~CompositeFixture() {
    delete beijing_head_office_;
    delete huadong_branch_office_;
    delete nanjing_office_;
    delete hangzhou_office_;
  }

  ConcreteCompany *beijing_head_office_;
  ConcreteCompany *huadong_branch_office_;
  ConcreteCompany *nanjing_office_;
  ConcreteCompany *hangzhou_office_;
};

TEST_F(CompositeFixture, composite_test) {
}
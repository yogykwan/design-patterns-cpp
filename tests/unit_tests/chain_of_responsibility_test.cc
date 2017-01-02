//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "chain_of_responsibility.h"

class ChainOfResponsibilityFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  ChainOfResponsibilityFixture(): Test() {
    common_manager_ = new CommonManager("JingLi");
    majordomo_ = new Majordomo("ZongJian");
    general_manager_ = new GeneralManager("ZongJingLi");
    common_manager_->SetSuperior(majordomo_);
    majordomo_->SetSuperior(general_manager_);

    request1_ = new Request("leave application", 4);
    common_manager_->RequestApplications(request1_);

    request2_ = new Request("salary increase", 1000);
    common_manager_->RequestApplications(request2_);
  }

  virtual ~ChainOfResponsibilityFixture(){
    delete request1_;
    delete request2_;
    delete common_manager_;
    delete majordomo_;
    delete general_manager_;
  }

  Request *request1_, *request2_;
  CommonManager *common_manager_;
  Majordomo *majordomo_;
  GeneralManager *general_manager_;
};

TEST_F(ChainOfResponsibilityFixture, chain_of_responsibility_test) {
}
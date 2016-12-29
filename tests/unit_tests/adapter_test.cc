//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "adapter.h"

class AdapterFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  AdapterFixture(): Test() {
    forward_ = new Forward("Battier");
    forward_->Attack();
    forward_->Defense();

    center_ = new Center("Russell");
    center_->Attack();
    center_->Defense();

    translator_ = new Translator("YaoMing");
    translator_->Attack();
    translator_->Defense();
  }

  virtual ~AdapterFixture() {
    delete forward_;
    delete center_;
    delete translator_;
  }

  Forward *forward_;
  Center *center_;
  Translator *translator_;
};

TEST_F(AdapterFixture, adapter_test) {
}
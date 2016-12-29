//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "bridge.h"

class BridgeFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  BridgeFixture(): Test() {
    handset_brand_ = new HandsetBrandM(new HandsetGame);
    handset_brand_->run();

    handset_brand_ = new HandsetBrandM(new HandsetAddressList);
    handset_brand_->run();

    handset_brand_ = new HandsetBrandN(new HandsetGame);
    handset_brand_->run();

    handset_brand_ = new HandsetBrandN(new HandsetAddressList);
    handset_brand_->run();
  }

  virtual ~BridgeFixture() {
    delete handset_brand_;
//    delete handset_soft_;
  }

  HandsetBrand *handset_brand_;
//  HandsetSoft *handset_soft_;
};

TEST_F(BridgeFixture, bridge_test) {
}
//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "proxy.h"

class ProxyFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  ProxyFixture(): Test() {
    school_girl_ = new SchoolGirl("Alice");
    proxy_ = new Proxy(school_girl_);
    proxy_->GiveFlowers();
    proxy_->GiveDolls();
  }

  virtual ~ProxyFixture() {
    delete school_girl_;
    delete proxy_;
  }

  SchoolGirl *school_girl_;
  Proxy *proxy_;
};

TEST_F(ProxyFixture, proxy_test) {
}
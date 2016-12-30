//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "flyweight.h"

class FlyweightFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  FlyweightFixture(): Test() {
    website_factory_ = new WebsiteFactory();
    website_ = website_factory_->GetWebsiteCategory("bbs");
    website_->Use(new User("Bob"));
    website_->Use(new User("Alice"));

    website_ = website_factory_->GetWebsiteCategory("blog");
    website_->Use(new User("Bob"));
    website_->Use(new User("Alice"));
  }

  virtual ~FlyweightFixture() {
    delete website_factory_;
  }

  WebsiteFactory *website_factory_;
  Website *website_;
};

TEST_F(FlyweightFixture, flyweight_test) {
}
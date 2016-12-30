//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "decorator.h"

class DecoratorFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  DecoratorFixture(): Test() {
    person_ = new Person();
    tie_ = new Tie(person_);
    suit_ = new Suit(tie_);
    shoes_ = new Shoes(suit_);
    shoes_->Show();
  }

  virtual ~DecoratorFixture() {
    delete person_;
    delete shoes_;
    delete suit_;
    delete tie_;
  }

  Person* person_;
  Tie* tie_;
  Suit* suit_;
  Shoes* shoes_;
};

TEST_F(DecoratorFixture, decorator_test) {
}
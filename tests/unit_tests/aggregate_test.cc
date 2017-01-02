//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "aggregate.h"
#include <iostream>

class AggregateFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  AggregateFixture(): Test() {
    list_ = new List();
    list_->Insert(1);
    list_->Insert(2);
    list_->Insert(3);
    list_iterator_ = list_->CreateIterator();
    std::cout << list_iterator_->CurrentItem() << std::endl;
    std::cout << list_iterator_->First() << std::endl;
    std::cout << list_iterator_->Next() << std::endl;
    std::cout << list_iterator_->IsDone() << std::endl;
    std::cout << list_iterator_->Next() << std::endl;
    std::cout << list_iterator_->Next() << std::endl;
    std::cout << list_iterator_->IsDone() << std::endl;
  }

  virtual ~AggregateFixture() {
    delete list_;
    delete list_iterator_;
  }
  List *list_;
  Iterator *list_iterator_;
};

TEST_F(AggregateFixture, aggregate_test) {
}
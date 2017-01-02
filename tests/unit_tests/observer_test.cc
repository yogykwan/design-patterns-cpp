//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "observer.h"

class ObserverFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  ObserverFixture(): Test() {
    boss_ = new Boss();
    stock_observer_ = new StockObserver("Alice");
    nba_observer_ = new NbaObserver("Bob");
    boss_->SetState("boss is back himself");

    stock_observer_->SetNotifier(boss_);
    nba_observer_->SetNotifier(boss_);
    boss_->Attach(stock_observer_);
    boss_->Attach(nba_observer_);
    boss_->Notify();

    boss_->Detach(nba_observer_);
    boss_->Notify();
  }

  virtual ~ObserverFixture() {
    delete boss_;
    delete stock_observer_;
    delete nba_observer_;
  }

  Boss *boss_;
  StockObserver *stock_observer_;
  NbaObserver *nba_observer_;

};

TEST_F(ObserverFixture, observer_test) {
}
//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "memento.h"
#include <typeinfo>
#include <string>

class MementoFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  MementoFixture(): Test() {
    game_role_ = new GameRole();
    state_caretaker_ = new StateCaretaker(game_role_->CreateMemento());
    game_role_->StateDisplay();

    game_role_->Fight();
    game_role_->StateDisplay();

    game_role_->RecoveryState(state_caretaker_->GetMemento());
    game_role_->StateDisplay();
  }

  virtual ~MementoFixture() {
    delete game_role_;
    delete state_caretaker_;
  }

  GameRole* game_role_;
  StateCaretaker* state_caretaker_;
};

TEST_F(MementoFixture, memento_test) {
}
//
// Created by Jennica on 2017/1/3.
//

#include "memento.h"
#include <iostream>

StateMemento::StateMemento(int hp, int mp): hp_(hp), mp_(mp) {}

int StateMemento::GetHp() {
  return hp_;
}

int StateMemento::GetMp() {
  return mp_;
}

GameRole::GameRole(): hp_(100), mp_(100) {}

StateMemento* GameRole::CreateMemento() {
  return new StateMemento(hp_, mp_);
}

void GameRole::StateDisplay() {
  std::cout << hp_ << " " << mp_ << std::endl;
}

void GameRole::Fight() {
  hp_ = 0;
  mp_ = 0;
}

void GameRole::RecoveryState(StateMemento *memento) {
  hp_ = memento->GetHp();
  mp_ = memento->GetMp();
}

StateCaretaker::StateCaretaker(StateMemento *memento): memento_(memento) {}

StateCaretaker::~StateCaretaker() {
  delete memento_;
}

StateMemento* StateCaretaker::GetMemento() {
  return memento_;
}



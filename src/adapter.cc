//
// Created by Jennica on 2016/12/29.
//

#include "adapter.h"
#include <iostream>

Player::Player(std::string name): name_(name) {}

Forward::Forward(std::string name): Player(name) {}

void Forward::Attack() {
  std::cout << "forward " << name_ << " attack" << std::endl;
}

void Forward::Defense() {
  std::cout << "forward " << name_ << " defense" << std::endl;
}

Center::Center(std::string name): Player(name) {}

void Center::Attack() {
  std::cout << "center " << name_ << " attack" << std::endl;
}

void Center::Defense() {
  std::cout << "center " << name_ << " defense" << std::endl;
}

ForeignCenter::ForeignCenter(std::string name): name_(name) {}

void ForeignCenter::Gong() {
  std::cout << "foreign center " << name_ << " attack" << std::endl;
}

void ForeignCenter::Shou() {
  std::cout << "foreign center " << name_ << " defense" << std::endl;
}

Translator::Translator(std::string name): Player(name) {
  foreign_center_ = new ForeignCenter(name);
}

Translator::~Translator() {
  delete foreign_center_;
}

void Translator::Attack() {
  foreign_center_->Gong();
}

void Translator::Defense() {
  foreign_center_->Shou();
}




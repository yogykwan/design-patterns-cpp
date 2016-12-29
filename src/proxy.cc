//
// Created by Jennica on 2016/12/29.
//

#include "proxy.h"

SchoolGirl::SchoolGirl(std::string name): name_(name) {
}

std::string SchoolGirl::GetName() {
  return name_;
}

Pursuit::Pursuit(SchoolGirl *school_girl): school_girl_(school_girl){
}

void Pursuit::GiveFlowers() {
  std::cout << "Give flowers to " << school_girl_->GetName() << std::endl;
}

void Pursuit::GiveDolls() {
  std::cout << "Give dolls to " << school_girl_->GetName() << std::endl;
}

Proxy::Proxy(SchoolGirl *school_girl) {
  pursuit_ = new Pursuit(school_girl);
}

Proxy::~Proxy() {
  delete pursuit_;
}

void Proxy::GiveFlowers() {
  pursuit_->GiveFlowers();
}

void Proxy::GiveDolls() {
  pursuit_->GiveDolls();
}
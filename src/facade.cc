//
// Created by Jennica on 2016/12/29.
//

#include "facade.h"
#include <iostream>

void Stock1::Buy() {
  std::cout << "buy stock1" << std::endl;
}

void Stock1::Sell() {
  std::cout << "sell stock1" << std::endl;
}

void Stock2::Buy() {
  std::cout << "buy stock2" << std::endl;
}

void Stock2::Sell() {
  std::cout << "sell stock2" << std::endl;
}

void Reality1::Buy() {
  std::cout << "buy reality1" << std::endl;
}

void Reality1::Sell() {
  std::cout << "sell reality1" << std::endl;
}

Fund::Fund() {
  stock1_ = new Stock1;
  stock2_ = new Stock2;
  reality1_ = new Reality1;
} 

Fund::~Fund() {
  delete stock1_;
  delete stock2_;
  delete reality1_;
}

void Fund::BuyFund() {
  stock1_->Buy();
  stock2_->Buy();
  reality1_->Buy();
}

void Fund::SellFund() {
  stock1_->Sell();
  stock2_->Sell();
  reality1_->Sell();
}

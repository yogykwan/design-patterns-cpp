//
// Created by Jennica on 2016/12/29.
//

#include "bridge.h"
#include <iostream>

void HandsetGame::run() {
  std::cout << "run game" << std::endl;
}

void HandsetAddressList::run() {
  std::cout << "run address list" << std::endl;
}

HandsetBrand::HandsetBrand(HandsetSoft *handset_soft): handset_soft_(handset_soft) {}

HandsetBrandM::HandsetBrandM(HandsetSoft *handset_soft): HandsetBrand(handset_soft) {}

HandsetBrandM::~HandsetBrandM() {
  delete handset_soft_;
}

void HandsetBrandM::run() {
  std::cout << "handset brand M: ";
  handset_soft_->run();
}

HandsetBrandN::HandsetBrandN(HandsetSoft *handset_soft): HandsetBrand(handset_soft) {}

HandsetBrandN::~HandsetBrandN() {
  delete handset_soft_;
}

void HandsetBrandN::run() {
  std::cout << "handset brand N: ";
  handset_soft_->run();
}
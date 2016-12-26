//
// Created by Jennica on 2016/12/26.
//

#include "factory_method.h"
#include <iostream>

void LeiFeng::Wash() {
  std::cout << "Wash" << std::endl;
}

void LeiFeng::Sweep() {
  std::cout << "Sweep" << std::endl;
}

void LeiFeng::BuyRice() {
  std::cout << "BuyRice" << std::endl;
}

LeiFeng* UndergraduateFactory::CreateLeiFeng() {
  LeiFeng* leifeng = new Undergraduate();
  return leifeng;
}

LeiFeng* VolunteerFactory::CreateLeiFeng() {
  LeiFeng* leifeng = new Volunteer();
  return leifeng;
}
//
// Created by Jennica on 2016/12/29.
//

#include "decorator.h"
#include <iostream>

void Person::Show() {
  std::cout << "person" << std::endl;
}

Finery::Finery(Person *component): component_(component) {}

Tie::Tie(Person *component): Finery(component) {}

void Tie::Show() {
  std::cout << "tie ";
  component_->Show();
}

Suit::Suit(Person *component): Finery(component) {}

void Suit::Show() {
  std::cout << "suit ";
  component_->Show();
}

Shoes::Shoes(Person *component): Finery(component) {}

void Shoes::Show() {
  std::cout << "shoes ";
  component_->Show();
}
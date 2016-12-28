//
// Created by Jennica on 2016/12/28.
//

#include "builder.h"
#include <iostream>

PersonDirector::PersonDirector(PersonBuilder* person_builder): person_builder_(person_builder) {

}

void PersonDirector::CreatePerson() {
  person_builder_->BuildBody();
  person_builder_->BuildHead();
}

PersonBuilder::PersonBuilder(Pen* pen, Graphics* graphics): pen_(pen), graphics_(graphics){

}

PersonThinBuilder::PersonThinBuilder(Pen* pen, Graphics* graphics): PersonBuilder(pen, graphics) {

}

void PersonThinBuilder::BuildHead() {
  std::cout<< "Build Thin Head"<<std::endl;
}

void PersonThinBuilder::BuildBody() {
  std::cout<< "Build Thin Body" << std::endl;
}

PersonFatBuilder::PersonFatBuilder(Pen* pen, Graphics* graphics): PersonBuilder(pen, graphics) {

}

void PersonFatBuilder::BuildHead() {
  std::cout<< "Build Fat Head" << std::endl;
}

void PersonFatBuilder::BuildBody() {
  std::cout<< "Build Fat Body" << std::endl;
}



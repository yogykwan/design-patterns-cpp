//
// Created by Jennica on 2017/1/3.
//

#include "command.h"
#include <iostream>
#include <typeinfo>

void Barbecuer::BakeMutton() {
  std::cout << "bake mutton" << std::endl;
}

void Barbecuer::BakeChicken() {
  std::cout << "bake chicken" << std::endl;
}

Command::Command(Barbecuer *barbecuer): barbecuer_(barbecuer) {}

BakeMuttonCommand::BakeMuttonCommand(Barbecuer *barbecuer): Command(barbecuer) {}

void BakeMuttonCommand::ExecuteCommand() {
  barbecuer_->BakeMutton();
}

BakeChickenCommand::BakeChickenCommand(Barbecuer *barbecuer): Command(barbecuer) {}

void BakeChickenCommand::ExecuteCommand() {
  barbecuer_->BakeChicken();
}

void Waiter::SetOrder(Command *command) {
  if(dynamic_cast<BakeChickenCommand*>(command)){
    std::cout << "chicken sold out" << std::endl;
  } else {
    commands_.push_back(command);
    std::cout << "add: " << std::string(typeid(*command).name()).substr(2) << std::endl;
  }
}

void Waiter::CancelOrder(Command *command) {
  for(std::vector <Command*> ::iterator it = commands_.begin(); it != commands_.end(); ++it) {
    if(*it == command) {
      commands_.erase(it);
      std::cout << "cancel: " << std::string(typeid(*command).name()).substr(2) << std::endl;
      return;
    }
  }
}

void Waiter::Notify() {
  for (std::vector<Command *>::iterator it = commands_.begin(); it != commands_.end(); ++it) {
    (*it)->ExecuteCommand();
  }
}





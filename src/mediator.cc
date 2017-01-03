//
// Created by Jennica on 2017/1/3.
//

#include "mediator.h"
#include <iostream>

void UnitedNationsSecurityCouncil::SetUsa(Country *usa) {
  usa_ = usa;
}

void UnitedNationsSecurityCouncil::SetIraq(Country *iraq) {
  iraq_ = iraq;
}

void UnitedNationsSecurityCouncil::Declare(std::string message, Country * country) {
  if(country == usa_) {
    iraq_->GetMessage(message);
  } else if(country == iraq_){
    usa_->GetMessage(message);
  }
}

Country::Country(UnitedNations *mediator): mediator_(mediator) {}

Usa::Usa(UnitedNations *mediator): Country(mediator) {}

void Usa::Declare(std::string message) {
  mediator_->Declare(message, this);
}

void Usa::GetMessage(std::string message) {
  std::cout << "USA gets: \"" << message << "\"" << std::endl;
}

Iraq::Iraq(UnitedNations *mediator): Country(mediator) {}

void Iraq::Declare(std::string message) {
  mediator_->Declare(message, this);
}

void Iraq::GetMessage(std::string message) {
  std::cout << "Iraq gets: \"" << message << "\"" << std::endl;
}


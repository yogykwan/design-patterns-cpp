//
// Created by Jennica on 2016/12/31.
//

#include "chain_of_responsibility.h"
#include <iostream>

Request::Request(std::string type, int number): type_(type), number_(number) {}

int Request::GetNumber() {
  return number_;
}

std::string Request::GetType() {
  return type_;
}

Manager::Manager(std::string name): name_(name) {}

void Manager::SetSuperior(Manager *superior) {
  superior_ = superior;
}

CommonManager::CommonManager(std::string name): Manager(name) {}

void CommonManager::RequestApplications(Request *request) {
  if(request->GetType() == "leave application" && request->GetNumber() <= 2){
    std::cout << name_ << " : approve" << std::endl;
  } else {
    superior_->RequestApplications(request);
  }
}

Majordomo::Majordomo(std::string name): Manager(name) {}

void Majordomo::RequestApplications(Request *request) {
  if(request->GetType() == "leave application" && request->GetNumber() <= 5){
    std::cout << name_ << " : approve" << std::endl;
  } else {
    superior_->RequestApplications(request);
  }
}

GeneralManager::GeneralManager(std::string name): Manager(name) {}

void GeneralManager::RequestApplications(Request *request) {
  if(request->GetType() == "leave application"){
    std::cout << name_ << " : approve" << std::endl;
  } else if(request->GetType() == "salary increase" && request->GetNumber() <= 500){
    std::cout << name_ << " : approve" << std::endl;
  } else {
    std::cout << name_ << " : not approve" << std::endl;
  }
}

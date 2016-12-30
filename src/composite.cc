//
// Created by Jennica on 2016/12/30.
//

#include "composite.h"
#include <iostream>

Company::Company(std::string name): name_(name) {}

HrDepartment::HrDepartment(std::string name): Company(name) {}

void HrDepartment::Display(int depth) {
  for(int i = 0; i < depth; ++i)
    std::cout << "--";
  std::cout << name_  << std::endl;
}

void HrDepartment::LineOfDuty() {
  std::cout << name_ << " : human resources" << std::endl;
}

FinanceDepartment::FinanceDepartment(std::string name): Company(name) {}

void FinanceDepartment::Display(int depth) {
  for(int i = 0; i < depth; ++i)
    std::cout << "--";
  std::cout << name_  << std::endl;
}

void FinanceDepartment::LineOfDuty() {
  std::cout << name_ << " : finance analysis" << std::endl;
}

ConcreteCompany::ConcreteCompany(std::string name): Company(name) {}

void ConcreteCompany::Add(Company *company) {
  companies_.push_back(company);
}

void ConcreteCompany::Display(int depth) {
  for(int i = 0; i < depth; ++i)
    std::cout << "--";
  std::cout << name_  << std::endl;
  for(std::vector <Company*> ::iterator it = companies_.begin(); it != companies_.end(); ++it) {
    (*it)->Display(depth + 1);
  }
}

void ConcreteCompany::LineOfDuty() {
  for(std::vector <Company*> ::iterator it = companies_.begin(); it != companies_.end(); ++it) {
    (*it)->LineOfDuty();
  }
}
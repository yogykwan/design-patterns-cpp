//
// Created by Jennica on 2016/12/30.
//

#ifndef DESIGN_PATTERNS_COMPOSITE_H
#define DESIGN_PATTERNS_COMPOSITE_H

#include <string>
#include <vector>

class Company {
public:
  Company() {}
  Company(std::string);
  virtual void Add(Company*) = 0;
  virtual void Display(int) = 0;
  virtual void LineOfDuty() = 0;

protected:
  std::string name_;
};

class HrDepartment: public Company {
public:
  HrDepartment() {}
  HrDepartment(std::string);
  void Add(Company*) {}
  void Display(int);
  void LineOfDuty();
};

class FinanceDepartment: public Company {
public:
  FinanceDepartment() {}
  FinanceDepartment(std::string);
  void Add(Company*) {}
  void Display(int);
  void LineOfDuty();
};

class ConcreteCompany: public Company {
public:
  ConcreteCompany() {}
  ConcreteCompany(std::string);
  void Add(Company*);
  void Display(int);
  void LineOfDuty();

private:
  std::vector <Company*> companies_;
};


#endif //DESIGN_PATTERNS_COMPOSITE_H

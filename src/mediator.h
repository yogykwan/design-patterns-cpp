//
// Created by Jennica on 2017/1/3.
//

#ifndef DESIGN_PATTERNS_MEDIATOR_H
#define DESIGN_PATTERNS_MEDIATOR_H

#include <string>

class Country;

class UnitedNations {
public:
  virtual void Declare(std::string, Country*) = 0;
};

class UnitedNationsSecurityCouncil: public UnitedNations {
public:
  UnitedNationsSecurityCouncil() {}
  void SetUsa(Country*);
  void SetIraq(Country*);
  void Declare(std::string, Country*);

private:
  Country *usa_;
  Country *iraq_;
};

class Country {
public:
  Country() {}
  Country(UnitedNations*);
  virtual void Declare(std::string) = 0;
  virtual void GetMessage(std::string) = 0;

protected:
  UnitedNations *mediator_;
};

class Usa: public Country {
public:
  Usa(UnitedNations*);
  void Declare(std::string);
  void GetMessage(std::string);
};

class Iraq: public Country {
public:
  Iraq(UnitedNations*);
  void Declare(std::string);
  void GetMessage(std::string);
};


#endif //DESIGN_PATTERNS_MEDIATOR_H

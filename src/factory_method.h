//
// Created by Jennica on 2016/12/26.
//

#ifndef DESIGN_PATTERNS_FACTORY_METHOD_H
#define DESIGN_PATTERNS_FACTORY_METHOD_H

class LeiFeng {
public:
  virtual void Wash();
  virtual void Sweep();
  virtual void BuyRice();
};

class Undergraduate: public LeiFeng {

};

class Volunteer: public LeiFeng {

};

class IFactory {
public:
  virtual LeiFeng* CreateLeiFeng() = 0;
};

class UndergraduateFactory: public IFactory {
public:
  LeiFeng* CreateLeiFeng();
};

class VolunteerFactory: public IFactory {
public:
  LeiFeng* CreateLeiFeng();
};

#endif //DESIGN_PATTERNS_FACTORY_METHOD_H

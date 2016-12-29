//
// Created by Jennica on 2016/12/29.
//

#ifndef DESIGN_PATTERNS_PROXY_H
#define DESIGN_PATTERNS_PROXY_H

#include <iostream>
#include <string>

class SchoolGirl {
public:
  SchoolGirl() {}
  SchoolGirl(std::string);
  std::string GetName();
private:
  std::string name_;
};

class GiveGift {
public:
  virtual void GiveFlowers() = 0;
  virtual void GiveDolls() = 0;
};

class Pursuit: public GiveGift{
public:
  Pursuit() {}
  Pursuit(SchoolGirl *);
  void GiveFlowers();
  void GiveDolls();

private:
  SchoolGirl *school_girl_;
};

class Proxy: public GiveGift{
public:
  Proxy() {}
  Proxy(SchoolGirl *);
  ~Proxy();
  void GiveFlowers();
  void GiveDolls();

private:
  Pursuit *pursuit_;
};


#endif //DESIGN_PATTERNS_PROXY_H

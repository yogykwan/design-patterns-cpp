//
// Created by Jennica on 2016/12/29.
//

#ifndef DESIGN_PATTERNS_ADAPTER_H
#define DESIGN_PATTERNS_ADAPTER_H

#include <string>

class Player {
public:
  Player() {}
  Player(std::string);
  virtual void Attack() {}
  virtual void Defense() {}

protected:
  std::string name_;
};

class Forward: public Player {
public:
  Forward() {}
  Forward(std::string);
  void Attack();
  void Defense();
};

class Center: public Player {
public:
  Center() {}
  Center(std::string);
  void Attack();
  void Defense();
};

class ForeignCenter {
public:
  ForeignCenter() {}
  ForeignCenter(std::string);
  void Gong();
  void Shou();

private:
  std::string name_;
};

class Translator: public Player {
public:
  Translator() {}
  Translator(std::string);
  ~Translator();
  void Attack();
  void Defense();

private:
  ForeignCenter *foreign_center_;
};


#endif //DESIGN_PATTERNS_ADAPTER_H

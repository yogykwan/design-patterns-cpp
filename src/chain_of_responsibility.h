//
// Created by Jennica on 2016/12/31.
//

#ifndef DESIGN_PATTERNS_CHAIN_OF_RESPONSIBILITY_H
#define DESIGN_PATTERNS_CHAIN_OF_RESPONSIBILITY_H

#include <string>

class Request {
public:
  Request() {}
  Request(std::string, int);
  std::string GetType();
  int GetNumber();

private:
  std::string type_;
  int number_;
};

class Manager {
public:
  Manager() {}
  Manager(std::string);
  void SetSuperior(Manager *);
  virtual void RequestApplications(Request *) = 0;

protected:
  Manager *superior_;
  std::string name_;
};

class CommonManager: public Manager {
public:
  CommonManager(std::string);
  void RequestApplications(Request *);
};

class Majordomo: public Manager {
public:
  Majordomo(std::string);
  void RequestApplications(Request *);
};

class GeneralManager: public Manager {
public:
  GeneralManager(std::string);
  void RequestApplications(Request *);
};


#endif //DESIGN_PATTERNS_CHAIN_OF_RESPONSIBILITY_H

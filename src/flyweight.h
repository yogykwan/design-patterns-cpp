//
// Created by Jennica on 2016/12/29.
//

#ifndef DESIGN_PATTERNS_FLYWEIGHT_H
#define DESIGN_PATTERNS_FLYWEIGHT_H

#include <map>
#include <string>

class User {
public:
  User() {}
  User(std::string);
  std::string GetName();

private:
  std::string name_;
};

class Website {
public:
  virtual void Use(User *) = 0;
};

class ConcreteWebsite: public Website {
public:
  ConcreteWebsite() {}
  ConcreteWebsite(std::string);
  void Use(User *);
private:
  std::string website_name_;
};

class WebsiteFactory {
public:
  ~WebsiteFactory();
  Website* GetWebsiteCategory(std::string);
  int GetWebsiteCount();

private:
  std::map <std::string, Website*> flyweights_;
};

#endif //DESIGN_PATTERNS_FLYWEIGHT_H

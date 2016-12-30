//
// Created by Jennica on 2016/12/29.
//

#include "flyweight.h"
#include <iostream>

User::User(std::string name): name_(name) {}

std::string User::GetName() {
  return name_;
}

ConcreteWebsite::ConcreteWebsite(std::string website_name): website_name_(website_name) {}

void ConcreteWebsite::Use(User *user) {
  std::cout << user->GetName() << " use " << website_name_ << std::endl;
}

WebsiteFactory::~WebsiteFactory() {
  std::map <std::string, Website*> ::iterator it;
  for(it = flyweights_.begin(); it != flyweights_.end(); it++) {
    delete it->second;
  }
}

Website* WebsiteFactory::GetWebsiteCategory(std::string website_name) {
  if(flyweights_.find(website_name) == flyweights_.end()) {
    Website *website = new ConcreteWebsite(website_name);
    flyweights_[website_name] = website;
  }
  return flyweights_[website_name];
}

int WebsiteFactory::GetWebsiteCount() {
  return (int)flyweights_.size();
}


//
// Created by Jennica on 2017/1/2.
//

#include "observer.h"
#include <iostream>

Observer::Observer(std::string name): name_(name) {}

void Observer::SetNotifier(Notifier *notifier) {
  notifier_ = notifier;
}

void Notifier::Attach(Observer * observer) {
  observers_.push_back(observer);
}

void Notifier::Detach(Observer * observer) {
  for(std::vector <Observer*> ::iterator it = observers_.begin(); it != observers_.end(); ++it) {
    if(*it == observer) {
      observers_.erase(it);
      return;
    }
  }
}

void Notifier::SetState(std::string state) {
  state_ = state;
}

std::string Notifier::GetState() {
  return state_;
}

void Notifier::Notify() {
  for(std::vector <Observer*> ::iterator it = observers_.begin(); it != observers_.end(); ++it) {
    (*it)->Update();
  }
}

StockObserver::StockObserver(std::string name): Observer(name) {}

void StockObserver::Update() {
  std::cout << name_ << ", " << notifier_->GetState() << ", close stock" << std::endl;
}

NbaObserver::NbaObserver(std::string name): Observer(name) {}

void NbaObserver::Update() {
  std::cout << name_ << ", " << notifier_->GetState() << ", close NBA" << std::endl;
}
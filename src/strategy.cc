//
// Created by Jennica on 2017/1/2.
//

#include "strategy.h"
#include <iostream>
#include <sstream>

double CashNormal::AcceptCash(double money) {
  return money;
}

CashRebate::CashRebate(double money_rebate): money_rebate_(money_rebate) {}

double CashRebate::AcceptCash(double money) {
  return money * money_rebate_;
}

CashReturn::CashReturn(double money_condition, double money_return):
    money_condition_(money_condition), money_return_(money_return) {}

double CashReturn::AcceptCash(double money) {
  return money - (int)(money / money_condition_) * money_return_;
}

CashContext::CashContext(std::string type, std::string number) {
  if(type == "normal") {
    cash_ = new CashNormal();
  } else if (type == "rebate") {
    std::stringstream ss;
    double money_rebate;
    ss << number;
    ss >> money_rebate;
    cash_ = new CashRebate(money_rebate);
  } else if (type == "return") {
    std::stringstream ss;
    double money_condition, money_return;
    ss << number;
    ss >> money_condition >> money_return;
    cash_ = new CashReturn(money_condition, money_return);
  }
}

CashContext::~CashContext() {
  delete cash_;
}

double CashContext::GetResult(double money) {
  double result = cash_->AcceptCash(money);
  std::cout << result << std::endl;
  return result;
}


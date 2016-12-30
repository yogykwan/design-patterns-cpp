//
// Created by Jennica on 2016/12/29.
//

#ifndef DESIGN_PATTERNS_FACADE_H
#define DESIGN_PATTERNS_FACADE_H


class Stock1 {
public:
  void Buy();
  void Sell();
};

class Stock2 {
public:
  void Buy();
  void Sell();
};

class Reality1 {
public:
  void Buy();
  void Sell();
};

class Fund {
public:
  Fund();
  ~Fund();
  void BuyFund();
  void SellFund();

private:
  Stock1 *stock1_;
  Stock2 *stock2_;
  Reality1 *reality1_;
};


#endif //DESIGN_PATTERNS_FACADE_H

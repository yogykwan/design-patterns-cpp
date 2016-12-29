//
// Created by Jennica on 2016/12/29.
//

#ifndef DESIGN_PATTERNS_BRIDGE_H
#define DESIGN_PATTERNS_BRIDGE_H

class HandsetSoft {
public:
  virtual void run() {}
};

class HandsetGame: public HandsetSoft {
public:
  void run();
};

class HandsetAddressList: public HandsetSoft {
public:
  void run();
};

class HandsetBrand {
public:
  HandsetBrand() {}
  HandsetBrand(HandsetSoft *);
  virtual ~HandsetBrand() {}
  virtual void run() {}

protected:
  HandsetSoft *handset_soft_;
};

class HandsetBrandM: public HandsetBrand {
public:
  HandsetBrandM() {}
  HandsetBrandM(HandsetSoft *);
  ~HandsetBrandM();
  void run();
};

class HandsetBrandN: public HandsetBrand {
public:
  HandsetBrandN() {}
  HandsetBrandN(HandsetSoft *);
  ~HandsetBrandN();
  void run();
};


#endif //DESIGN_PATTERNS_BRIDGE_H

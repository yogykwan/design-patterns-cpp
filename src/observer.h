//
// Created by Jennica on 2017/1/2.
//

#ifndef DESIGN_PATTERNS_OBSERVER_H
#define DESIGN_PATTERNS_OBSERVER_H

#include <string>
#include <vector>

class Notifier;

class Observer {
public:
  Observer() {}
  Observer(std::string);
  virtual ~Observer() {}
  void SetNotifier(Notifier *);
  virtual void Update() = 0;

protected:
  std::string name_;
  Notifier *notifier_;
};

class StockObserver: public Observer {
public:
  StockObserver() {}
  StockObserver(std::string);
  void Update();
};

class NbaObserver: public Observer {
public:
  NbaObserver() {}
  NbaObserver(std::string);
  void Update();
};

class Notifier {
public:
  virtual ~Notifier() {}
  void Attach(Observer *);
  void Detach(Observer *);
  void SetState(std::string);
  std::string GetState();
  void Notify();

protected:
  std::vector <Observer*> observers_;
  std::string state_;
};

class Secretary: public Notifier {
};

class Boss: public Notifier {
};


#endif //DESIGN_PATTERNS_OBSERVER_H

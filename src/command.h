//
// Created by Jennica on 2017/1/3.
//

#ifndef DESIGN_PATTERNS_COMMAND_H
#define DESIGN_PATTERNS_COMMAND_H

#include <vector>

class Barbecuer {
public:
  void BakeMutton();
  void BakeChicken();
};

class Command {
public:
  Command() {}
  Command(Barbecuer*);
  virtual ~Command() {}
  virtual void ExecuteCommand() = 0;

protected:
  Barbecuer* barbecuer_;
};

class BakeMuttonCommand: public Command {
public:
  BakeMuttonCommand() {}
  BakeMuttonCommand(Barbecuer*);
  void ExecuteCommand();
};

class BakeChickenCommand: public Command {
public:
  BakeChickenCommand() {}
  BakeChickenCommand(Barbecuer*);
  void ExecuteCommand();
};

class Waiter {
public:
  void SetOrder(Command*);
  void CancelOrder(Command*);
  void Notify();

private:
  std::vector <Command*> commands_;
};


#endif //DESIGN_PATTERNS_COMMAND_H

//
// Created by Jennica on 2017/1/3.
//

#ifndef DESIGN_PATTERNS_MEMENTO_H
#define DESIGN_PATTERNS_MEMENTO_H

class StateMemento {
public:
  StateMemento() {}
  StateMemento(int, int);
  int GetHp();
  int GetMp();

private:
  int hp_;
  int mp_;
};

class GameRole {
public:
  GameRole();
  StateMemento* CreateMemento();
  void StateDisplay();
  void Fight();
  void RecoveryState(StateMemento*);

private:
  int hp_;
  int mp_;
};

class StateCaretaker {
public:
  StateCaretaker() {}
  StateCaretaker(StateMemento*);
  ~StateCaretaker();
  StateMemento* GetMemento();
private:
  StateMemento* memento_;
};


#endif //DESIGN_PATTERNS_MEMENTO_H

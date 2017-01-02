//
// Created by Jennica on 2017/1/2.
//

#ifndef DESIGN_PATTERNS_STATE_H
#define DESIGN_PATTERNS_STATE_H

class State;

class Work {
public:
  Work();
  ~Work();
  void SetState(State*);
  void WriteProgram();

public:
  bool finished_;
  int hour_;

private:
  State* state_;
};

class State {
public:
  virtual ~State() {}
  virtual void WriteProgram(Work*) = 0;
};

class WorkingState: public State {
  void WriteProgram(Work* work);
};

class OvertimeState: public State {
  void WriteProgram(Work* work);
};

class RestState: public State {
  void WriteProgram(Work* work);
};

class SleepingState: public State {
  void WriteProgram(Work* work);
};


#endif //DESIGN_PATTERNS_STATE_H

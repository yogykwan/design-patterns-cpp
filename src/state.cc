//
// Created by Jennica on 2017/1/2.
//

#include "state.h"
#include <iostream>

Work::Work() {
  state_ = new WorkingState();
}

Work::~Work() {
  delete state_;
}

void Work::SetState(State *state) {
  delete state_;
  state_ = state;
}

void Work::WriteProgram() {
  state_->WriteProgram(this);
}

void WorkingState::WriteProgram(Work *work) {
  if(work->hour_ < 17) {
    std::cout << work->hour_ << " : working" << std::endl;
  } else {
    work->SetState(new OvertimeState());
    work->WriteProgram();
  }
}

void OvertimeState::WriteProgram(Work *work) {
  if(work->finished_) {
    work->SetState(new RestState());
    work->WriteProgram();
  } else if (work->hour_ < 21) {
    std::cout << work->hour_ << " : overtime" << std::endl;
  } else {
    work->SetState(new SleepingState());
    work->WriteProgram();
  }
}

void RestState::WriteProgram(Work *work) {
  std::cout << work->hour_ << " : return to rest" << std::endl;
}

void SleepingState::WriteProgram(Work *work) {
  std::cout << work->hour_ << " : sleeping" << std::endl;
}
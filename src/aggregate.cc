//
// Created by Jennica on 2017/1/2.
//

#include "aggregate.h"

Iterator* List::CreateIterator() {
  return new ListIterator(this);
}

int List::Count() {
  return (int)items_.size();
}

int List::operator[] (int index) const {
  return items_[index];
}

void List::Insert(int value) {
  items_.push_back(value);
}

ListIterator::ListIterator(List *aggregate): aggregate_(aggregate), current_(0) {}

int ListIterator::First() {
  return (*aggregate_)[0];
}

int ListIterator::Next() {
  int next = -1;
  if(++current_ < aggregate_->Count())
    next =  (*aggregate_)[current_];
  return next;
}

bool ListIterator::IsDone() {
  return current_ >= aggregate_->Count();
}

int ListIterator::CurrentItem() {
  return (*aggregate_)[current_];
}

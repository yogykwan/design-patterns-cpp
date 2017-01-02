//
// Created by Jennica on 2017/1/2.
//

#ifndef DESIGN_PATTERNS_AGGREGATE_H
#define DESIGN_PATTERNS_AGGREGATE_H

#include <vector>

class Iterator;

class Aggregate {
public:
  virtual ~Aggregate() {}
  virtual Iterator* CreateIterator() = 0;
};

class List: public Aggregate {
public:
  Iterator* CreateIterator();
  int Count();
  int operator[] (int) const;
  void Insert(int);

private:
  std::vector <int> items_;
};

class Iterator {
public:
  virtual int First() = 0;
  virtual int Next() = 0;
  virtual bool IsDone() = 0;
  virtual int CurrentItem() = 0;
};

class ListIterator: public Iterator {
public:
  ListIterator() {}
  ListIterator(List*);
  int First();
  int Next();
  bool IsDone();
  int CurrentItem();

private:
  int current_;
  List *aggregate_;
};


#endif //DESIGN_PATTERNS_AGGREGATE_H

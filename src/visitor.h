//
// Created by Jennica on 2017/1/3.
//

#ifndef DESIGN_PATTERNS_VISITOR_H
#define DESIGN_PATTERNS_VISITOR_H

#include <vector>

class Action;

class Person {
public:
  virtual ~Person() {}
  virtual void Accept(Action*) = 0;
};

class Man: public Person {
public:
  void Accept(Action*);
};

class Woman: public Person {
public:
  void Accept(Action*);
};

class ObjectStructure {
public:
  void Attach(Person*);
  void Detach(Person*);
  void Display(Action*);

private:
  std::vector <Person*> people;
};

class Action {
public:
  virtual void GetManConclusion(Person*) = 0;
  virtual void GetWomanConclusion(Person*) = 0;
};

class Success: public Action {
  void GetManConclusion(Person*);
  void GetWomanConclusion(Person*);
};

class Failure: public Action {
  void GetManConclusion(Person*);
  void GetWomanConclusion(Person*);
};

#endif //DESIGN_PATTERNS_VISITOR_H

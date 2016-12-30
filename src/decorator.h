//
// Created by Jennica on 2016/12/29.
//

#ifndef DESIGN_PATTERNS_DECORATOR_H
#define DESIGN_PATTERNS_DECORATOR_H


class Person {
public:
  virtual void Show();
};

class Finery: public Person {
public:
  Finery() {}
  Finery(Person*);
  void Show() {}

protected:
  Person *component_;
};

class Tie: public Finery {
public:
  Tie() {}
  Tie(Person*);
  void Show();
};

class Suit: public Finery {
public:
  Suit() {}
  Suit(Person*);
  void Show();
};

class Shoes: public Finery {
public:
  Shoes() {}
  Shoes(Person*);
  void Show();
};


#endif //DESIGN_PATTERNS_DECORATOR_H

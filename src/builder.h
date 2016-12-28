//
// Created by Jennica on 2016/12/28.
//

#ifndef DESIGN_PATTERNS_BUILDER_H
#define DESIGN_PATTERNS_BUILDER_H

class Pen {
};

class Graphics {
};

class PersonBuilder {
public:
  PersonBuilder() {};
  virtual ~PersonBuilder() {};
  PersonBuilder(Pen*, Graphics*);
  virtual void BuildHead() {};
  virtual void BuildBody() {};

protected:
  Pen* pen_;
  Graphics* graphics_;
};

class PersonThinBuilder: public PersonBuilder {
public:
  PersonThinBuilder(Pen*, Graphics*);
  void BuildHead();
  void BuildBody();
};

class PersonFatBuilder: public PersonBuilder {
public:
  PersonFatBuilder(Pen*, Graphics*);
  void BuildHead();
  void BuildBody();
};

class PersonDirector {
public:
  PersonDirector(PersonBuilder*);
  void CreatePerson();
private:
  PersonBuilder* person_builder_;

};

#endif //DESIGN_PATTERNS_BUILDER_H

//
// Created by Jennica on 2016/12/23.
//


#include "gtest/gtest.h"
#include "builder.h"

class BuilderFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  BuilderFixture(): Test() {
    pen_ = new Pen;
    graphics_ = new Graphics;

    // build thin person
    person_builder_ = new PersonThinBuilder(pen_, graphics_);
    person_director_ = new PersonDirector(person_builder_);
    person_director_->CreatePerson();

    // build fat person
    person_builder_ = new PersonFatBuilder(pen_, graphics_);  // just replace PersonThinBuilder with PersonFatBuilder
    person_director_ = new PersonDirector(person_builder_);
    person_director_->CreatePerson();
  }

  virtual ~BuilderFixture() {
    delete pen_;
    delete graphics_;
    delete person_builder_;
    delete person_director_;
  }

  Pen *pen_;
  Graphics *graphics_;
  PersonBuilder* person_builder_;
  PersonDirector* person_director_;
};

TEST_F(BuilderFixture, builder_test) {
}
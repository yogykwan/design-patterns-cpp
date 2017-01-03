//
// Created by Jennica on 2016/12/28.
//

#include "gtest/gtest.h"
#include "interpreter.h"

class InterpreterFixture: public ::testing::Test {
protected:
  virtual void TearDown() {};
  virtual void SetUp() {};

public:
  InterpreterFixture(): Test() {
    expression_factory_ = new ExpressionFactory();
    context_ = new Context();
    context_->SetText("O 2 E 0.5 G 0.5 A 3");
    while(context_->GetText().length()) {
      expression_ = expression_factory_->CreateExpression(context_);
      expression_->Interprete(context_);
      delete expression_;
    }
  }

  virtual ~InterpreterFixture() {
    delete context_;
    delete expression_factory_;
  }

  Context *context_;
  ExpressionFactory *expression_factory_;
  Expression *expression_;
};

TEST_F(InterpreterFixture, interpreter_test) {
}
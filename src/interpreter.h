//
// Created by Jennica on 2017/1/3.
//

#ifndef DESIGN_PATTERNS_INTERPRETER_H
#define DESIGN_PATTERNS_INTERPRETER_H

#include <string>

class Context {
public:
  void SetText(std::string);
  std::string GetText();

private:
  std::string text_;
};

class Expression {
public:
  virtual ~Expression() {}
  void Interprete(Context*);

protected:
  virtual void Excute(std::string, double) = 0;
};

class Scale: public Expression {
private:
  void Excute(std::string, double);
};

class Note: public Expression {
private:
  void Excute(std::string, double);
};

class ExpressionFactory {
public:
  Expression* CreateExpression(Context*);
};

#endif //DESIGN_PATTERNS_INTERPRETER_H

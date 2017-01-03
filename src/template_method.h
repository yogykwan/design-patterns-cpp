//
// Created by Jennica on 2017/1/3.
//

#ifndef DESIGN_PATTERNS_TEMPLATE_METHOD_H
#define DESIGN_PATTERNS_TEMPLATE_METHOD_H

#include <string>

class TestPaper {
public:
  void Question1();
  void Question2();
  void Question3();

protected:
  virtual std::string Answer1() = 0;
  virtual std::string Answer2() = 0;
  virtual std::string Answer3() = 0;
};

class TestPaperA: public TestPaper {
  std::string Answer1();
  std::string Answer2();
  std::string Answer3();
};

class TestPaperB: public TestPaper {
  std::string Answer1();
  std::string Answer2();
  std::string Answer3();
};


#endif //DESIGN_PATTERNS_TEMPLATE_METHOD_H

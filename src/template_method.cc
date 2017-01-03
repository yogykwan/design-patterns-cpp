//
// Created by Jennica on 2017/1/3.
//

#include "template_method.h"
#include <iostream>

void TestPaper::Question1() {
  std::cout << "question 1: " << Answer1() << std::endl;
}

void TestPaper::Question2() {
  std::cout << "question 2: " << Answer2() << std::endl;
}

void TestPaper::Question3() {
  std::cout << "question 3: " << Answer3() << std::endl;
}

std::string TestPaperA::Answer1() {
  return "a";
}

std::string TestPaperA::Answer2() {
  return "a";
}

std::string TestPaperA::Answer3() {
  return "a";
}

std::string TestPaperB::Answer1() {
  return "b";
}

std::string TestPaperB::Answer2() {
  return "b";
}

std::string TestPaperB::Answer3() {
  return "b";
}


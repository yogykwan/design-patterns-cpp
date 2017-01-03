//
// Created by Jennica on 2017/1/3.
//

#include "interpreter.h"
#include <iostream>
#include <sstream>

std::string Context::GetText() {
  return text_;
}

void Context::SetText(std::string text) {
  text_ = text;
}

void Expression::Interprete(Context *context) {
  std::stringstream ss;
  std::string key;
  double value;
  std::string remain_text = context->GetText();
  ss << remain_text;
  ss >> key >> value;
  remain_text = remain_text.substr(remain_text.find(" ")+1);
  remain_text = remain_text.substr(remain_text.find(" ")+1);
  if(remain_text.length() < 3){
    remain_text = "";
  }
  context->SetText(remain_text);
  Excute(key, value);
}

void Scale::Excute(std::string key, double value) {
  switch ((int)value){
    case 1:
      std::cout << "bass " << std::endl;
      break;
    case 2:
      std::cout << "alto " << std::endl;
      break;
    case 3:
      std::cout << "treble " << std::endl;
      break;
    default:
      break;
  }
}

void Note::Excute(std::string key, double value) {
  std::cout << key[0] << std::endl;
}

Expression* ExpressionFactory::CreateExpression(Context *context) {
  char key = context->GetText()[0];
  if(key == 'O') {
    return new Scale();
  } else {
    return new Note();
  }
}
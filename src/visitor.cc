//
// Created by Jennica on 2017/1/3.
//

#include "visitor.h"
#include <iostream>

void Man::Accept(Action *action) {
  action->GetManConclusion(this);
}

void Woman::Accept(Action *action) {
  action->GetWomanConclusion(this);
}

void ObjectStructure::Attach(Person *person) {
  people.push_back(person);
}

void ObjectStructure::Detach(Person *person) {
  for(std::vector <Person*>::iterator it = people.begin(); it != people.end(); ++it) {
    if(*it == person) {
      people.erase(it);
      return;
    }
  }
}

void ObjectStructure::Display(Action *action) {
  for (std::vector<Person *>::iterator it = people.begin(); it != people.end(); ++it) {
    (*it)->Accept(action);
  }
}

void Success::GetManConclusion(Person *person) {
  std::cout << "man gets success" << std::endl;
}

void Success::GetWomanConclusion(Person *person) {
  std::cout << "woman gets success" << std::endl;
}

void Failure::GetManConclusion(Person *person) {
  std::cout << "man gets failure" << std::endl;
}

void Failure::GetWomanConclusion(Person *person) {
  std::cout << "woman gets failure" << std::endl;
}



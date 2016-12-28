//
// Created by Jennica on 2016/12/28.
//

#ifndef DESIGN_PATTERNS_PROTOTYPE_H
#define DESIGN_PATTERNS_PROTOTYPE_H

#include <string>
class WorkExperience {
public:
  void SetCompany(std::string);
  void SetTimeArea(std::string);
  std::string GetCompany();
  std::string GetTimeArea();
  WorkExperience* Clone();

private:
  std::string company_;
  std::string time_area_;
};

class Resume {
public:
  Resume() {};
  Resume(std::string);
  ~Resume();
  void SetPersonalInfo(std::string, std::string);
  void SetWorkExperience(std::string, std::string);
  Resume* Clone();
  void PrintResume();

private:
  std::string name_;
  std::string sex_;
  std::string age_;
  WorkExperience *work_experience_;
};


#endif //DESIGN_PATTERNS_PROTOTYPE_H

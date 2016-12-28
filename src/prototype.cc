//
// Created by Jennica on 2016/12/28.
//

#include "prototype.h"
#include <iostream>

void WorkExperience::SetCompany(std::string company) {
  company_ = company;
}

void WorkExperience::SetTimeArea(std::string time_area) {
  time_area_ = time_area;
}

std::string WorkExperience::GetCompany() {
  return company_;
}

std::string WorkExperience::GetTimeArea() {
  return time_area_;
}

WorkExperience* WorkExperience::Clone() {
  WorkExperience* new_work_experience = new WorkExperience();
  new_work_experience->SetCompany(company_);
  new_work_experience->SetTimeArea(time_area_);
  return new_work_experience;
}

Resume::Resume(std::string name) {
  name_ = name;
  work_experience_ = new WorkExperience();
}

Resume::~Resume() {
  delete work_experience_;
}

void Resume::SetPersonalInfo(std::string sex, std::string age){
  sex_ = sex;
  age_ = age;
}

void Resume::SetWorkExperience(std::string company, std::string time_area) {
  work_experience_->SetCompany(company);
  work_experience_->SetTimeArea(time_area);
}

Resume* Resume::Clone() {
  Resume* new_resume = new Resume(name_);
  new_resume->SetPersonalInfo(sex_, age_);
  new_resume->work_experience_ = work_experience_->Clone();
  return new_resume;
}

void Resume::PrintResume() {
  std::cout<< name_ << ", " << sex_ << ", " << age_ << ", "
           << work_experience_->GetCompany() << " : " << work_experience_->GetTimeArea() << std::endl;
}
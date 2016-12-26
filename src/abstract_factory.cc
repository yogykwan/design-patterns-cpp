//
// Created by Jennica on 2016/12/23.
//

#include "abstract_factory.h"
#include <iostream>

void SqlserverUser::InsertUser(User* user) {
  std::cout << "Insert User into Sqlserver" << std::endl;
}

User SqlserverUser::GetUser(int id) {
  std::cout << "Get User from Sqlserver" << std::endl;
}

void AccessUser::InsertUser(User* user) {
  std::cout << "Insert User into Access" << std::endl;
}

User AccessUser::GetUser(int id) {
  std::cout << "Get User from Access" << std::endl;
}

void SqlserverDepartment::InsertDepartment(Department* department) {
  std::cout << "Insert Department into Sqlserver" << std::endl;
}

Department SqlserverDepartment::GetDepartment(int id) {
  std::cout << "Get Department from Sqlserver" << std::endl;
}

void AccessDepartment::InsertDepartment(Department* department) {
  std::cout << "Insert Department into Access" << std::endl;
}

Department AccessDepartment::GetDepartment(int id) {
  std::cout << "Get Department from Access" << std::endl;
}


IUser* SqlserverFactory::CreateUser() {
  IUser* i_user =  new SqlserverUser();
  return i_user;
}

IDepartment* SqlserverFactory::CreateDepartment() {
  IDepartment* i_Department =  new SqlserverDepartment();
  return i_Department;
}

IUser* AccessFactory::CreateUser() {
  IUser* i_user =  new AccessUser();
  return i_user;
}

IDepartment* AccessFactory::CreateDepartment() {
  IDepartment* i_Department =  new AccessDepartment();
  return i_Department;
}
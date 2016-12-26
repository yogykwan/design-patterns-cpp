//
// Created by Jennica on 2016/12/23.
//


#include "gtest/gtest.h"
#include "abstract_factory.h"

class AbstractFactoryFixture: public ::testing::Test {
protected:
  virtual void TearDown() {}
  virtual void SetUp() {}

public:
  AbstractFactoryFixture() : Test() {
    // use sqlserver to insert/get user/department
    i_factory_ = new SqlserverFactory();

    i_user_ = i_factory_->CreateUser();
    i_user_->InsertUser(new User());
    i_user_->GetUser(0);

    i_department_ = i_factory_->CreateDepartment();
    i_department_->InsertDepartment(new Department());
    i_department_-> GetDepartment(0);

    // use accecss to insert/get user/department
    i_factory_ = new AccessFactory(); //compared with sqlserver abobve, only change here

    i_user_ = i_factory_->CreateUser();
    i_user_->InsertUser(new User());
    i_user_->GetUser(0);

    i_department_ = i_factory_->CreateDepartment();
    i_department_->InsertDepartment(new Department());
    i_department_-> GetDepartment(0);
  }

  virtual ~AbstractFactoryFixture() {
    delete i_factory_;
    delete i_user_;
    delete i_department_;
  }

  IFactory* i_factory_;
  IUser* i_user_;
  IDepartment* i_department_;
};

TEST_F(AbstractFactoryFixture, abstract_factory_test) {
  
}

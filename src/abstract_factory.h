//
// Created by Jennica on 2016/12/23.
//

#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_H
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_H


class User {
};

class IUser {
public:
    virtual void InsertUser(User*) = 0;
    virtual User GetUser(int) = 0;
};

class SqlserverUser: public IUser {
public:
    void InsertUser(User* user);
    User GetUser(int id);
};

class AccessUser: public IUser {
public:
    void InsertUser(User* user);
    User GetUser(int id);
};

class Department {
};

class IDepartment {
public:
    virtual void InsertDepartment(Department*) = 0;
    virtual Department GetDepartment(int) = 0;
};

class SqlserverDepartment: public IDepartment {
public:
    void InsertDepartment(Department* department);
    Department GetDepartment(int id);
};

class AccessDepartment: public IDepartment {
public:
    void InsertDepartment(Department* department);
    Department GetDepartment(int id);
};

class IFactory {
public:
    virtual IUser* CreateUser() = 0;
    virtual IDepartment* CreateDepartment() = 0;
};

class SqlserverFactory: public IFactory {
public:
    IUser* CreateUser();
    IDepartment* CreateDepartment();
};

class AccessFactory: public IFactory {
public:
    IUser* CreateUser();
    IDepartment* CreateDepartment();
};

#endif //DESIGN_PATTERNS_ABSTRACT_FACTORY_H

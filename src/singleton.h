//
// Created by Jennica on 2016/12/28.
//

#ifndef DESIGN_PATTERNS_SINGLETON_H
#define DESIGN_PATTERNS_SINGLETON_H


#include<pthread.h>

class Singleton {
private:
  Singleton() {};
public:
  static Singleton* GetInstance();

private:
  static Singleton* instance_;
  static pthread_mutex_t mutex_;
};


#endif //DESIGN_PATTERNS_SINGLETON_H

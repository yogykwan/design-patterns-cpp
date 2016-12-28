//
// Created by Jennica on 2016/12/28.
//

#include "singleton.h"

//Lock::Lock(CCriticalSection critical_section): critical_section_(critical_section) {
//  pthread_mutex_lock (&mutex);
//}
//
//Lock::~Lock() {
//  critical_section_.Unlock();
//}

Singleton* Singleton::instance_ = NULL;

pthread_mutex_t Singleton::mutex_;

Singleton* Singleton::GetInstance() {
  if(instance_ == NULL) {
    pthread_mutex_lock(&mutex_);
    if(instance_ == NULL) {
      instance_ = new Singleton();
    }
    pthread_mutex_unlock(&mutex_);
  }
  return instance_;
}
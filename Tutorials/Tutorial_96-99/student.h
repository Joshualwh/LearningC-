#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>
#include "user.h"

class Student : public User
{
  public:
    void output();
};

#endif
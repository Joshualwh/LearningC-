#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <vector>
#include <string>
#include "user.h"

class Teacher : public User
{
  public:
    std::vector<std::string> classes_teaching;
    void output();
};

#endif
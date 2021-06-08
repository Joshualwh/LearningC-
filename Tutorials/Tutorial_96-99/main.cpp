#include <iostream>
#include <string>
#include "user.h"
#include "teacher.h"
#include "student.h"

void do_something(User &user)
{
  user.output();
}

int main()
{
  Teacher teacher;
  Student student;
  User& u1 = teacher;
  User& u2 = student;  
  do_something(u1);
  do_something(u2);
}
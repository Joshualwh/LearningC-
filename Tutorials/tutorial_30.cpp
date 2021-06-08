#include <iostream>

int main()
{
  int x = 5 + 5;
  //For the division operator, int/int gets int only and no remainder, need to use float/int or int/float or float/float to get the remainder together. 
  double x = 10 + (4.0 / 3) ;
  std::cout << x << std::endl;
  //can find online C++ Operator Precedence

  double x;
  double y;
  x = 10;
  y = x = 100;
  std::cout << x << "\t" << y << std::endl;
  //100 100
  (y = x) = 100;
  std::cout << x << "\t" << y << std::endl;
  //10 100
}
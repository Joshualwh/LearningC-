#include <iostream>
#include <cmath>

int main()
{
  std::cout << remainder(10, 3.25) << std::endl;
  //remainder and fmod is similar
  std::cout << fmax(10, 3.25) << std::endl;
  std::cout << fmin(10, 3.25) << std::endl;
  std::cout << ceil(fmin(10, 3.25)) << std::endl;
  std::cout << floor(fmin(10, 3.25)) << std::endl;
  std::cout << trunc(fmin(10, 3.25)) << std::endl; //takes away the decimal point
  std::cout << round(-1.5) << std::endl;
}
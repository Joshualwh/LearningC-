#include <iostream>
#include <string>

int main()
{
  int factorial = 5;
  for (int i = factorial - 1; i > 0; i--)
  {
    factorial = factorial * i;
    std::cout << factorial << std::endl;
  }
  return 0;
}
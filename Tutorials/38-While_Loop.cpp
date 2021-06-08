#include <iostream>
#include <string>

int main()
{
  int factorial = 5;
  int i = factorial - 1;
  while (i > 1)
  {
    factorial *= i;
    i--;
  }
  std::cout << factorial << std::endl;
}



/*
int main()
{
  int i = 9;
  while(i >= 0)
  {
    std::cout << i << std::endl;
    i--; //Put i++ at the end to match the for loop
  }

}
*/
/*
int main()
{
  int fact = 7;
  int factorial = fact;
  for (int i = factorial - 1; i > 1; i--)
  {
    factorial = factorial * i;
  }
  std::cout << "factorial of " << fact << ": " << factorial << std::endl;
  return 0;
}
*/

//increment happens at the end of the for loop
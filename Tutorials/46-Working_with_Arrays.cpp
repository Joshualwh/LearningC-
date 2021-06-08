#include <iostream>

int main()
{
  int guesses[] = {12, 43, 54, 65, 76};

  int size = sizeof(guesses) / sizeof(guesses[0]); // it has a limitation

  for (int i = 0; i < size; i++)
  {
    std::cout << guesses[i] << "\t";
  }
  return 0;
}
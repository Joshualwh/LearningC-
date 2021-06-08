#include <iostream>

void print_array(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << array[i] << "\t";
  }
  std::cout << std::endl;
}

int main()
{
  int guesses[] = {12, 43, 54, 65, 76};
  int size = sizeof(guesses)/sizeof(int);
  print_array(guesses, 5);
}
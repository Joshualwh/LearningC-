#include <iostream>
#include <vector>

void print_array(int data[], int size)
{
  for (int i = 0; i < size; i++)
  {
    data[i]++;
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
}

int main()
{
  int data[] = {1,2,3};
  print_array(data,3);
  std::cout << data[0] << std::endl;
  return 0;
}
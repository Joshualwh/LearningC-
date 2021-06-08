#include <iostream>
#include <vector>
#include <array>

int main()
{
  std::array<int, 60> data = {1,2,3,4,5,6};

  //Range based for loop
  //Iterate through every single element
  //Only good for normal array
  for (int n : data)
  {
    std::cout << n << "\t";
  }

/*  
  //Normal for loop
  for (int i = 0; i < 6; i++)
  {
    std::cout << data[i] << "\t";
  }
  std::cout << "\n";
*/
}
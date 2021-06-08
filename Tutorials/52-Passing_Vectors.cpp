#include <iostream>
#include <vector>

void print_vector(std::vector<int> &data) // "&" lets you store the new data vector, change variable inside the function.
{
  data.push_back(12);
  for(int i = 0; i < data.size(); i++)
  {
    std::cout << data[i] << "\t"; 
  }
}

int main()
{
  std::vector<int> data = {1,2,3};
  print_vector(data);
}
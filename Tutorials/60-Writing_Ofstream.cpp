#include <iostream>
#include <fstream>
#include <vector>

int main()
{
  std::string filename;
  std::cin >> filename;

  std::ofstream file (filename.c_str(), std::ios::app);
  // std::ofstream file ("hello.txt", std::ios::app); // This is to append.

  if(file.is_open())
  {
    std::cout << "Successfully Opened\n";
  }
  std::vector<std::string> names;
  names.push_back("A");
  names.push_back("B");
  names.push_back("Susan");

  for(std::string name : names)
  {
    file << name <<std::endl;
  }

  file.close(); //Not important as it will be done automatically.
  return 0;
}
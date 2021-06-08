#include <iostream>
#include <fstream>
#include <vector>

int main()
{
  std::ifstream file ("hello.txt");

  std::string line;
  getline(file, line);
  std::cout << line << "\n";

/* std::vector<std::string> names;

  std::string input;
  while(file >> input) //return file
  {
    names.push_back(input);
  }

  for(std::string name : names)
  {
    std::cout << name << std::endl;
  }
*/  
  return 0;
}
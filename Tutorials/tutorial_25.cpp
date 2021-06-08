#include <iostream>
#include <string>

using std::string;

int main()
{
  string greeting;
  getline(std::cin, greeting); //to get strings
  std::cout << greeting <<std::endl;
  //cin.getline(); //to get numbers
}
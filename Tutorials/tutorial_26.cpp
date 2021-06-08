#include <iostream>
#include <string>

using std::string;

int main()
{
  string greeting = "Hello";
  greeting.append(" there!");
  greeting.insert(3, "      ");
  greeting.erase(3, 2);
  // to remove last character
  greeting.erase(greeting.length() - 1);
  // or we can use
  greeting.pop_back();
  greeting.replace(0, 4, "Heaven");
  std::cout << greeting.length() <<std::endl;
  //length or size, similar

}
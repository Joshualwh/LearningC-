#include <iostream>
#include <string>

using std::string;

/*int main()
{
  string greeting = "What the hell?";
  greeting.find("hell");
  greeting.replace(greeting.find("hell"), 1, "Heaven");
  std::cout << greeting <<std::endl;
}
*/

int main()
{
  string greeting = "What is up?";
  //std::cout << greeting.substr(5, 2) <<std::endl;
  std::cout << greeting.find_first_of("aeiou") <<std::endl;
  //npos is used for testing
  if (greeting.find_first_of("!") == -1)
  {
    std::cout << "NOT FOUND!" << std::endl;
  }
  if (greeting.compare("What is up?") == 0)//same produces 0, different produces -1
  {
    std::cout << "Equals" << std::endl;
  }  
}
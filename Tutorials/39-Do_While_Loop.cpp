#include <iostream>
#include <string>

int main()
{
  //at least once
  std::string password = "bleh123";
  std::string guess;

  do
  {
    std::cout << "Guess password: ";
    std::cin >> guess;
  }
  while (guess != password);

}
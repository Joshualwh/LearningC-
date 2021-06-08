#include <iostream>

int main()
{
  std::cout << "Please insert your age: ";
  int age;
  std::cin >> age;
  
  if(age < 13)
  {
    std::cout << "You're not old enough!\n";
  }
  else if(age == 15)
  {
    std::cout << "YAYAYA I KNOW\n";
  }
  else
  {
    std::cout << "You're damn old son!\n";
  }
  return 0;
}
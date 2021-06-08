#include <string>
#include <iostream>

int main()
{
  enum seasons{summer, spring, fall, winter};
  seasons now = winter;
  
  switch(now)
  {
    case summer:
      std::cout << "Wow\n";
      break;
    case spring:
      std::cout << "Meh\n";
      break;
    case fall:
      std::cout << "Ugh\n";
      break;
    case winter:
      std::cout << "ulerrr\n";
      break;
  }
}

//Remember to always put break after cases.

#include <iostream>
#include <string>

int main()
{
  std::string name_answer = "Joshua";
  std::string name_guess;
  int age_answer = 42;
  int age_guess;

  std::cout << "Guess the name: ";
  std::cin >> name_guess;
  std::cout << "Guess the age: ";
  std::cin >> age_guess;

  if(name_guess == name_answer)
  {
    if(age_guess == age_answer)
    {
      std::cout << "You got both right!\n";
    }
    else
    {
      std::cout << "Name is right but age is wrong!\n";
    }
  }
  else
  {
    std::cout << "Name is already wrong!\n";
  }
  return 0;
}

/*
//logical
&& || !

//comparison
== != <> <= >=
*/
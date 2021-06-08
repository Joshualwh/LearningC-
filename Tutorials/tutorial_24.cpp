#include <iostream>
#include <string>

using std::string;

int main()
{
  string greeting = "hello"; //The default value for a string is an empty string.
  string complete_greeting = greeting + " there";
  complete_greeting += "!";

  std::cout << complete_greeting << std::endl;
  std::cout << complete_greeting.length() << std::endl;
  //method == member function == functions attached to objects

  char name[] = "Caleb"; //c string == array of characters
  //Has a lot of limitations. ex.String size is not easily changed.

  //cstring is harder and string classes are easier to work with.
}

//Getting user input
/*
int main()
{
  string greeting;
  std::cin >> greeting;
  std::cout << greeting << std::endl;
  //However it will only take up the first word until space.
  //Next tutorial to see how to take it all.
}
*/
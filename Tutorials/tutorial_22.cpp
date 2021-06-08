#include <iostream>

using std::cout;
# define X 10 //Another way to set const, not preferred

int main()
{
  const int x = 5;//creates a read only variable
  //x = 10 will get a compile error

  //int int_age = 5, it is redundant.

  enum {y = 100};
}

/*int main()
{
  const int x;
  x = 5
  will also produce error as the setting of const int must be done in the same line.
}
*/
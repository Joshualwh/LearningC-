//Create multiple versions of the function.
#include <iostream>

void swap (int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;

  std::cout << "a: " << a << "\tb: " << b << "\n";
}

void swap(std::string &a,std::string &b)
{
  std::string temp = a;
  a = b;
  b = temp;

  std::cout << "x: " << a << "\ty: " << b << "\n";
}

int main()
{
  int a = 10;
  int b = 20;
  std::string x = "me";
  std::string y = "you";

  swap(a,b);
  std::cout << "a: " << a << "\tb: " << b << "\n";
  swap(x,y);
  std::cout << "x: " << x << "\ty: " << y << "\n";
  return 0;
}
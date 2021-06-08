#include <iostream>
using std::cout;
using std::endl;

int main()
{
  unsigned char x = 200; //8 bits, must use single quotes
  cout << x << endl; // Based on ASCII table
  
  short a;
  int b;
  long c;
  long long d;
  //short <= int <= long <= long long
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;

  // cout << sizeof(short) << endl;
  // sizeof is a function not an operator.

  // cout << ULLONG_MAX << endl;
}

//unicode for multi language
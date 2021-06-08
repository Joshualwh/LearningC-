#include <iostream>
#include <float.h>

using std::cout;

int main()
{
  float a = 10.0 / 3; //float is the most untrustworthy when dealing with large numbers
  a = a * 100000000;

  double b = 77000; //or you can put 7.7E4 
  // double has more precise numbers compared to float

  long double c;
  //long double has the most precise numbers

  // use float when you have really restricted memory

  cout << std::fixed << a << std::endl;
  cout << FLT_DIG << std::endl;
  // 7.7 * 10000 = 77000
}

// if more exact numbers are needed, need to find extra extensions/library.

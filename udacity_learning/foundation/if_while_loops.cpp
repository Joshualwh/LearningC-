#include <iostream>
using std::cout;

int main() 
{
  int i = 1;
  while (i<11){
    cout << i << "\n";
    if (i%2 == 0){
      cout << i << "is even" << "\n";
    }
    i++;
  }
}
#include <iostream>

template <typename T>
void swap (T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
void swap (T a[], T b[], int size)
{
  for(int i = 0; i < size; i++)
  {
    T temp = a[i];
    a[i] = b[i];
    b[i] = temp;
    
    std::cout << a[i] << " " << b[i] << "\t";
  }
}
/*
void swap(std::string &a,std::string &b)
{
  std::string temp = a;
  a = b;
  b = temp;

  std::cout << "x: " << a << "\ty: " << b << "\n";
}
*/
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

  int nines[] = {9,9,9,9,9,9};
  int ones[] = {1,1,1,1,1,1};

  for(int i = 0; i < 6; i++)
  {
    std::cout << nines[i] << " " << ones[i] << "\t";
  }
  std::cout << "\n\n";

  swap(nines, ones, 6);
  return 0;
}
#include "73.2.h"

namespace utilz
{
  double area (double length, double width)
  {
    return length * width;
  }

  double area (double length)
  {
    return length * length;
  }

  double area (Rectangle rectangle)
  {
    return rectangle.length * rectangle.width;
  }

  double pow(double base, int pow = 2)
  {
    int total = 1;
    for(int i = 0; i < pow; i++)
    {
      total *= base;
    }
    return total;
  }
}



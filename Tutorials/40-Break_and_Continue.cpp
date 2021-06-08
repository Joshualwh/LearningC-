#include <iostream>
#include <string>

int main()
{
  std::string sentence = "Hello my name is Caleb";
  for (int i = 0; i < sentence.size(); i++)
  {
    std::cout << sentence[i] <<std::endl;
    if (sentence[i] == 'o')
    {
      std::cout << "found o!\n";
      break;
    }
  }
  std::cout << "Done!\n";
}
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game()
{
  int random = rand() % 251;
  std::cout << random << std::endl;
  std::cout << "Guess a number: ";
  while (true)
  {
    int guess;
    std::cin >> guess;
    if (guess == random)
    {
      std::cout << "You win!\n";
      break;
    }
    else if (guess < random)
    {
      std::cout << "Too low!\n"; 
    }
    else
    {
      std::cout << "Too High!\n";
    }
  }
}

int main()
{
  srand(time(NULL));
  int choice;

  do
  {
    std::cout << "0. Quit\n1. Play Game!\n";
    std::cin >> choice;

    switch (choice)
    {
      case 0:
        std::cout << "Thanks for nothing\n";
        return 0;
      case 1:
        play_game();
        break;
    }
  } while (choice != 0);
  
}
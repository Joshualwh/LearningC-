#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void login()
{
  std::string login_username, login_password;

  std::ifstream file ("particulars.txt");

  std::vector<std::string> particular_data;
  std::string input;
  while(file >> input) //return file
  {
    particular_data.push_back(input);
  }

  if (particular_data.size() != 0)
  {
    std::cout << "Username: ";
    std::cin >> login_username;
    std::cout << "Password: ";
    std::cin >> login_password;

    for (int username_number = 0; username_number < particular_data.size(); username_number+=3)
    {
      if (particular_data[username_number] == login_username && particular_data[username_number+1] == login_password)
      {
        std::cout << "Login Successful!" << std::endl;
        break;
      }
      else
      {
        std::cout << "Login Unsuccessful!" << std::endl;
        break;
      }
    }
  }
  else
  {
    std::cout << "No user registered!" << std::endl;
  }
}

void registration()
{
  std::string registration_username, registration_password, registration_email;

  std::cout << "REGISTRATION" << std::endl;
  std::cout << "Username: ";
  std::cin >> registration_username;
  std::cout << "Password: ";
  std::cin >> registration_password;
  std::cout << "Email: ";
  std::cin >> registration_email;

  std::ofstream file ("particulars.txt", std::ios::app);

  std::vector<std::string> registration_data;
  registration_data.push_back(registration_username);
  registration_data.push_back(registration_password);
  registration_data.push_back(registration_email);

  for(std::string registration : registration_data)
  {
    file << registration <<std::endl;
  }
}

void reset()
{
  std::string confirmation;

  std::cout << "Are you sure you want to reset? (Yes/No) ";
  std::cin >> confirmation;

  if (confirmation == "yes" || confirmation == "Yes")
  {
    std::cout << "Data reset done!" << std::endl;
    std::ofstream file ("particulars.txt");

    std::vector<std::string> reset_data;

    for(std::string reset : reset_data)
    {
      file << reset <<std::endl;
    }
  }
  else
  {
    std::cout << "Data not reset!" << std::endl;
  }
}

int main()
{
  int choice;
  do
  {
    std::cout << "1. Login" << "\n2. Register" << "\n3. Reset" << "\n4. Exit" << std::endl;
    std::cout << "Choose your number: ";
    std::cin >> choice;

    switch (choice)
    {
      case 1:
      {
        login();
        break;
      }
      case 2:
      {
        registration();
        break;
      }
      case 3:
      {
        reset();
        break;
      }
      case 4:
      {
        std::cout << "Goodbye hope to see you next time!" << std::endl;
        break;
      }
      default:
        std::cout << "The choice doesn't exist!" << std::endl;
        break;
    } 
  }while (choice != 4);
}
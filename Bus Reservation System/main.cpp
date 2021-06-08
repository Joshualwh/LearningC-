#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdio>

void Install_Bus_Information()
//bus no., driver’s name, arrival time, departure time and destination (from and to) of the bus
{
  std::string bus_number, bus_driver, arrival_time, departure_time, destination;

  std::cout << "Installing..." << std::endl;
  std::cout << "Please key in the neccessary informations: " << std::endl;
  std::cin.ignore();
  std::cout << "Bus Number: ";
  std::getline (std::cin, bus_number);
  std::cout << "Driver's Name: ";
  std::getline (std::cin, bus_driver);
  std::cout << "Arrival Time: ";
  std::getline (std::cin, arrival_time);
  std::cout << "Departure Time: ";
  std::getline (std::cin, departure_time);
  std::cout << "Destination: ";
  std::getline (std::cin, destination);

  std::ofstream file ("bus_information.txt", std::ios::app);

  std::vector<std::string> bus_information_data;
  bus_information_data.push_back(bus_number);
  bus_information_data.push_back(bus_driver);
  bus_information_data.push_back(arrival_time);
  bus_information_data.push_back(departure_time);
  bus_information_data.push_back(destination);

  for(std::string bus_information : bus_information_data)
  {
    file << bus_information <<std::endl;
  }

  std::ofstream outfile (bus_number + "_seat_information.txt");

  std::string seat_number_string;
  std::vector<std::string> bus_seat_information_data;

  for (int seat_number = 1; seat_number < 33; seat_number++)
  {
    seat_number_string = std::to_string(seat_number);
    bus_seat_information_data.push_back(seat_number_string + ".");
  }

  for(std::string bus_seat_information : bus_seat_information_data)
  {
    outfile << bus_seat_information <<std::endl;
  }
}

void Reservation()
//includes the bus no., seat number and the passenger’s name. The seat number of the particular bus is reserved under the passenger’s name.
{
  int reserve_seat, bus_number, bus_number_number, bus_number_run_time;
  std::string reserve_name, bus_number_entered;
  bool bus_number_found_status = 0, bus_one_round = 0;

  std::ifstream file ("bus_information.txt");

  std::vector<std::string> bus_number_data;
  std::string input;
  while(file >> input) //return file
  {
    bus_number_data.push_back(input);
  }

  if(bus_number_data.size() == 0)
  {
    std::cout << "No bus information registered! " << std::endl;
  }

  else if (bus_number_data.size() != 0)
  {
    std::cout << "Which bus?" << std::endl;
    std::cin >> bus_number_entered;
    
    do
    {
      for (int bus_number_number = 0; bus_number_number < bus_number_data.size(); bus_number_number+=5)
      {
        if (bus_number_data[bus_number_number] == bus_number_entered)
        {
          std::cout << "Bus number found!" << std::endl;
          bus_number_found_status = 1;
          break;
        }
      }
      bus_one_round = 1;
    } while (bus_one_round == 0);

    if (bus_number_found_status == 0)
    {
      std::cout << "Bus number not found!" << std::endl;
    }

    if (bus_number_found_status == 1)
    {
      std::ifstream file (bus_number_entered + "_seat_information.txt");

      int reserve_seat_int;
      std::string input, reserve_seat, reserve_name, reserve_seat_string, full_reservation_string, reserve_seat_continue;
      std::vector<std::string> bus_seat_reservation_data;

      while(file >> input) //return file
      {
        bus_seat_reservation_data.push_back(input);
      }

      std::cin.ignore();
      do 
      {
        std::cout << "Which seat do you want to reserve? ";
        std::getline (std::cin, reserve_seat);
        std::cout << "What is your name? ";
        std::getline (std::cin, reserve_name);

        full_reservation_string = reserve_seat + "." + reserve_name;

        reserve_seat_int = stoi(reserve_seat);
        bus_seat_reservation_data[reserve_seat_int-1] = full_reservation_string;
        
        std::cout << "Continue reserving seats? (Yes/No) ";
        std::getline (std::cin, reserve_seat_continue);

      } while (reserve_seat_continue == "yes" || reserve_seat_continue == "Yes" );

      std::ofstream outfile (bus_number_entered + "_seat_information.txt");
      for(std::string bus_seat_reservation : bus_seat_reservation_data)
      {
        outfile << bus_seat_reservation <<std::endl;
      }
    }
  }
}

void Show_Reservation_Information()
//show all the information regarding the buses and their respective seats.
//enlists the no. of empty seats in a bus along with the seat number registered to a particular passenger.
{
  int bus_number_information, bus_number_information_limit;
  std::string bus_number, show_reservation_continue;
  std::cin.ignore();
  
  std::ifstream infile ("bus_information.txt");

  std::vector<std::string> bus_number_data;
  std::string input;
  while(infile >> input) //return file
  {
    bus_number_data.push_back(input);
  }

  do 
  {
    bool bus_number_found_status = 0, bus_one_round = 0;

    std::cout << "Which bus would you like to see? ";
    std::getline(std::cin, bus_number);
    
    do
    {
      for (int bus_number_number = 0; bus_number_number < bus_number_data.size(); bus_number_number+=5)
      {
        if (bus_number_data[bus_number_number] == bus_number)
        {
          std::cout << "Bus registered and showing!" << std::endl;
          bus_number_information = bus_number_number;
          bus_number_information_limit = bus_number_number+5;
          for (int bus_number_information; bus_number_information < bus_number_information_limit; bus_number_information+=1)
          {
            std::cout << bus_number_data[bus_number_information] << "\t";
          }
          std::cout << std::endl;
          bus_number_found_status = 1;
          break;
        }
      }
      bus_one_round = 1;
    } while (bus_one_round == 0);

    if (bus_number_found_status == 0)
    {
      std::cout << "Bus number not found!" << std::endl;
    }

    if (bus_number_found_status == 1)
    {
      std::ifstream file;
      file.open(bus_number + "_seat_information.txt");

      std::vector<std::string> show_reservation_data;

      while(file >> input) //return file
      {
        show_reservation_data.push_back(input);
      }

      int seat_number = 0;
      for (int seat_row = 1; seat_row < 9; seat_row++)
      {
        for (int seat_column = 1; seat_column < 5; seat_column++)
        {
          std::cout << show_reservation_data[seat_number] << "\t";
          seat_number+=1; 
        }
        std::cout << std::endl;
      }
    } 
    std::cout << "Would you like to continue viewing? (Yes/No) ";
    std::getline(std::cin, show_reservation_continue);
  } while(show_reservation_continue == "yes" || show_reservation_continue == "Yes");
}

void Buses_Available()
{
  std::cout << "Availabling!" << std::endl;
}

void Bus_Information_Reset()
{
  std::string confirmation;

  std::cout << "Are you sure you want to reset? (Yes/No) ";
  std::cin >> confirmation;

  if (confirmation == "yes" || confirmation == "Yes")
  {
    std::cout << "Data reset done!" << std::endl;
    std::ofstream file ("bus_information.txt");

    std::vector<std::string> reset_data;

    for(std::string reset : reset_data)
    {
      file << reset <<std::endl;
    }
    system("rm *_seat_information.txt");
    std::cout << "All seat information deleted!" << std::endl;
  }

  else
  {
    std::cout << "Data not reset!" << std::endl;
  }
}

int main()
{
  int choice;

  do{
    std::cout << "1. Install Bus Information\n2. Reservation\n3. Show Reservation Information\n4. Buses Available\n5. Reset Bus Information\n6. Exit" << std::endl;
    std::cout << "What is your choice? " << std::endl;
    std:: cin >> choice;

    switch (choice)
    {
      case 1:
      {
        Install_Bus_Information();
        break;
      }
      case 2:
      {
        Reservation();
        break;
      }
      case 3:
      {
        Show_Reservation_Information();
        break;
      }
      case 4:
      {
        Buses_Available();
        break;
      }
      case 5:
      {
        Bus_Information_Reset();
        break;
      }
      case 6:
      {
        std::cout << "Shutting Down..." << std::endl;
        break;
      }
      default:
      {
        std::cout << "Choice doesn't exist!" << std::endl;
        break;
      }
    }

  } while (choice != 6);

}


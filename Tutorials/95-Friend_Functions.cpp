#include <iostream>
#include <vector>

class User
{
  static int user_count;
  std::string status = "Gold";

  public:
  static int get_user_count()
  {
    return user_count;
  }
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
      return status;
    }
    void set_status(std::string status)
    {
      if(status == "Gold" || status == "Silver" || status == "Bronze")
      {
        this->status = status;
      }
      else
      {
        this->status = "no_status";
      }
    }
    User()
    {
      user_count++;
    }
    User(std::string first_name, std::string last_name, std::string status)
    {
      this->first_name = first_name;
      this->last_name = last_name;
      this->status = status;
      user_count++;
    }
    ~User()
    {
      user_count--;
    }
    friend std::ostream& operator << (std::ostream &output, User user);
    friend std::istream& operator >> (std::istream &input, User &user);
};

int User::user_count = 0;

std::ostream& operator << (std::ostream &output, User user)
{
  output << "First name: " << user.first_name << "\nLast name: " << user.last_name << "\nStatus: " << user.status;
  return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
  input >> user.first_name >> user.last_name >> user.status;
  return input;
}

int main()
{
  User user;
  std::cin >> user;
  std::cout << user << std::endl;
  return 0;
}
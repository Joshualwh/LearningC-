#include <iostream>
#include <vector>

class User
{
  std::string status = "Gold";

  public:
    std::string first_name;
    std::string last_name;
    std::string get_status()
    {
      return status;
    }

};

int add_user_if_not_exists(std::vector<User> &users, User user)
{
  for(int i = 0; i < users.size(); i++)
  {
    if(users[i].first_name == user.first_name &&
        users[i].last_name == user.last_name)
    {
      return i;
    }
  }
  users.push_back(user);
  return users.size() - 1;

}

int main()
{
  std::vector<User> users;
  users.push_back(User());

  User user1, user2, user3;
  user1.first_name = "Joshua";
  user1.last_name = "Ling";

  user2.first_name = "Michelle";
  user2.last_name = "Wong";

  user3.first_name = "Eduardo";
  user3.last_name = "Johannas";

  users.push_back(user1);
  users.push_back(user2);
  users.push_back(user3);

  User user;
  user.first_name = "Joshua";
  user.last_name = "Ling";

  std::cout << add_user_if_not_exists(users, user) << std::endl;
  return 0;
}
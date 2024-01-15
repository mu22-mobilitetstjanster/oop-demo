#include <string>
#include <iostream>

#include "user.hpp"

using std::string;
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  FullName fullName = {"Bertil", "Yvesson"};
  User user {"Bert", fullName};

  cout << "Alias: " << user.getAlias() << endl
    << "First name: " << user.getName().first << endl
    << "Surname: " << user.getName().last << endl;


  FullName staffFullName = {"Greta", "Yvesson"};
  Staff staff {"Greta", staffFullName, 23};

  cout << "Alias: " << staff.getAlias() << endl
    << "Staff id: " << staff.staffId << endl
    << "First name: " << staff.getName().first << endl
    << "Surname: " << staff.getName().last << endl;

  return 0;
}

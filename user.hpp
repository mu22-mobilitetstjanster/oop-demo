#pragma once // Denna ska alltid finnas i header files

#include <string>

using std::string;

struct FullName {
  string first;
  string last;
};

class User {

  protected:
    string alias;
    FullName name;

  public:
    User(string alias, FullName name);
    string getAlias();
    virtual FullName getName();
};

class Staff : public User {
  using User::User;

  public:
    int staffId;
    Staff(string alias, FullName name, int staffId);
    User view(string alias);
    FullName getName() override;
};
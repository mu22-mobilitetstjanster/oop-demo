#include <string>
#include "user.hpp"

using std::string;

User::User(string alias, FullName name) {
  this->alias = alias;
  this->name = name;
}

string User::getAlias() {
  return alias;
}

FullName User::getName() {
  return name;
}

// Allt här nedanför bör ligga i staff.cpp
Staff::Staff(string alias, FullName name, int staffId): User(alias, name) {
  this->staffId = staffId;
}

FullName Staff::getName() {
  return {name.first, "******"};
}
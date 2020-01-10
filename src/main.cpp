#include <iostream>

using namespace std;

class User {
public:
  User(string name) : name(name) {}
  string name;
};

int main() {
  User user("Chisimdi");

  cout << user.name << endl;

  return 0;
}
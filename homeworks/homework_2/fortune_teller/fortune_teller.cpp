#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  string name, birthdayMonth;
  vector<string> adjectives(2);
  std::map<string, string> noun = {{"spring", "STL guru"},
                                   {"summer", "C++ expert"},
                                   {"autumn", "coding beast"},
                                   {"winter", "software design hero"}};

  cout << "Welcome to the fortune teller program!" << endl;
  cout << "Please enter your name:" << endl;
  cin >> name;
  cout << "Please enter the time of year when you were born:\n(pick from "
          "'spring', 'summer', 'autumn', 'winter')"
       << endl;
  cin >> birthdayMonth;
  cout << "Please enter an adjective:" << endl;
  cin >> adjectives[0];
  cout << "Please enter another adjective:" << endl;
  cin >> adjectives[1];

  printf("%s, the %s %s that finds errors quicker than the compiler \n",
         name.c_str(), adjectives[name.length() % adjectives.size()].c_str(),
         noun.find(birthdayMonth)->second.c_str());
  return 0;
}
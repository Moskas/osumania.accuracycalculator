#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#define clean cout << "\x1B[2J\x1B[H"
#define cout std::cout
#define endl std::endl
#define cin std::cin
float accuracy;
char user_choice;
std::vector<float> user_judgements(6);
std::string judgments[6] = {"300g", "300", "200", "100", "50", "Miss"};
std::vector<float> get_judgements() {
  for (int i = 0; i < 6; i++) {
    clean << "Amount of: " << judgments[i] << " - ";
    cin >> user_judgements[i];
    while (cin.fail()) {
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Not a number, please insert a proper number: ";
      cin >> user_judgements[i];
    };
    while (user_judgements[i] < 0) {
      cin.clear();
      cout << "Number cannot be less than a 0, please insert a proper number: ";
      cin >> user_judgements[i];
    };
  }
  return user_judgements;
};
char calculate() {
  clean;
  cout << "Judgements: \n";
  for (int i = 0; i < 6; i++) {
    cout << judgments[i] << ": " << user_judgements[i] << "\n";
  };
  float v1 =
      (50 * user_judgements[4] + 100 * user_judgements[3] +
       200 * user_judgements[2] +
       300 * (user_judgements[1] + user_judgements[0])) /
      (300 * (user_judgements[5] + user_judgements[4] + user_judgements[3] +
              user_judgements[2] + user_judgements[1] + user_judgements[0])) *
      100;
  cout << "Acc: " << std::setprecision(6) << v1
       << "%\nPA: " << user_judgements[0] / user_judgements[1] << endl;
  cout << "Calculate another accuracy? y/n" << endl;
  cin >> user_choice;
  return user_choice;
}
int main() {
  do {
    user_judgements = get_judgements();
    calculate();
  } while (std::tolower(user_choice) == 'y');
  return 0;
}

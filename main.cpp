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
char R;
std::vector<float> user_judgements(6);
std::string judgments[6] = {"300g", "300", "200", "100", "50", "miss"};
std::vector<float> get_judgements() {
  for (ulong i = 0; i < user_judgements.size(); i++) {
    clean << "Amount of: " << judgments[i] << ": ";
    cin >> user_judgements[i];
  }
  return user_judgements;
};
void calculate() {
  do {
    clean;
    float v1 =
        (50 * user_judgements[4] + 100 * user_judgements[3] +
         200 * user_judgements[2] +
         300 * (user_judgements[1] + user_judgements[0])) /
        (300 * (user_judgements[5] + user_judgements[4] + user_judgements[3] +
                user_judgements[2] + user_judgements[1] + user_judgements[0])) *
        100;
    cout << "Acc:" << std::setprecision(6) << v1
         << "%\n PA:" << user_judgements[0] / user_judgements[1] << endl;
    cout << "Jeszcze raz? Y-Tak, N-Nie: " << endl;
    cin >> R;
  } while (std::tolower(R) == 'y');
}
int main() {
  user_judgements = get_judgements();
  calculate();
  return 0;
}

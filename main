#include <iostream>
#include <iomanip>
// Kalkulator ACC dla score v1 w osu!mania
float marvelous, perfect, great, good, bad, miss,PA;
long float accuracy;
char R;
using namespace std;
int acc(float marvelous, float perfect, float great, float  good, float bad, float miss) {
    //Zczytywanie trafien
    cout << "Podaj liczbe trafien... " << endl;
    cout << "300g:\t"; cin >> marvelous;
    cout << "300:\t"; cin >> perfect;
    cout << "200:\t"; cin >> great;
    cout << "100:\t"; cin >> good;
    cout << "50:\t"; cin >> bad;
    cout << "Miss:\t"; cin >> miss;
    //Wzor na ACC
    accuracy = (50 * bad + 100 * good + 200 * great + 300 * (perfect + marvelous)) / (300 * (miss + bad + good + great + perfect + marvelous))*100;
    //Liczenie ratio
    PA = marvelous / perfect;
    return accuracy, PA;
};

int main()
{
    do{
    system("CLS");
    acc(marvelous, perfect, great, good, bad, miss);
    cout << "Twoje dokladne acc to: " << setprecision(15) << accuracy << "%"<<endl;
    cout << "A twoje ratio to: 1:"/* << marvelous << ":" << perfect << " = "*/ << setprecision(4) << PA << endl;
    cout << "Jeszcze raz? Y-Tak, N-Nie: "<< endl;
    cin >> R;
    } while (R == 'Y' || 'y');
    return 0;
}

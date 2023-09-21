#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int height = 0;
    int weight = 0;
    int handsNumber = 2;
    int legsNumber = 2;
    int flightHours = 0;
    string eyeColor = "Зелёный";

    cout << endl;
    cout << " Введите рост и вес призывника: ";
    cin >> height >> weight;
    cout << " Введите количество рук и ног призывника: ";
    cin >> handsNumber >> legsNumber;
    cout << " Введите количество налётаных часов и цвет глаз презывника: ";
    cin >> flightHours >> eyeColor;

    if ((height < 145 || height>165) || (weight < 45 || weight>65) || eyeColor == "Зелёный" || flightHours < 100 || legsNumber != handsNumber) {
        cout << " Призывник негоден к службе в ВВС!" << endl;
    }
    else {
        cout << " Призывник прошёл отбор!" << endl;
    }


    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}
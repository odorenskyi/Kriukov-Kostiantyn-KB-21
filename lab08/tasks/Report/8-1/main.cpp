#include <iostream> //стат бібліотека
#include <clocale>
#include <conio.h>
#include <cmath> // Підключення бібліотеки cmath

using namespace std;

int main() // початок функції
{
    int x = 0, y = 0, z = 0; // Задані значченя
    double S = 0; // Що треба знайти

    setlocale(LC_ALL, "ukr"); // підключення UTF-8

    cout << "Введіть x: "; //вводимо значення 1
    cin >> x;

    cout << "Введіть y: "; // вводимо значення 2
    cin >> y;

    cout << "Введіть z: " << endl; // вводимо значення 3, кінець вводу
    cin >> z;


    S = (3 * sin(sqrt(12 * pow(x, 2) / log10(x - 3)))) + 1/2 * z; // математична умова

    cout << "S дорівнює " << S << endl; // результат
    _getch();
    return 0; //кінець функції
}

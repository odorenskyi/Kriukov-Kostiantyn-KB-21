#include <iostream>
#include <cmath>
#include <math.h>
#include "ModuleKriukov.h"

using namespace std;

bool isEqual(int a, int b)
{
   return (a > b);
}

void Autor(){
    cout << "© Крюков Костянтин" << endl;
}

void logic(int a, int b){
    if((a + 1) > (abs(b - 2)))
    {
        cout << "True" << endl;
    }
    else cout << "False" << endl;
}

float convert(int x, int y, int z)
{
    cout << "Число x в десятковій системі числення дорівнює " << x << endl;
    cout << "Числo x в шістнадцятковій системі числення дорівнює " << hex << x << endl;
    cout << "Число y в десятковій системі числення дорівнює " << y << endl;
    cout << "Числo y в шістнадцятковій системі числення дорівнює " << hex << y << endl;
    cout << "Число z в десятковій системі числення дорівнює " << z << endl;
    cout << "Числo z в шістнадцятковій системі числення дорівнює " << hex << z << endl;
    float S = s_calculation(x, y, z);

    return S;
}



int main()
{
    system("chcp 1251 && cls");
    Autor();
    int a, b;
    int x, y, z;
    cout << "Введіть а : ";
    cin >> a;
    cout << "Введіть b : ";
    cin >> b;
    cout << "Введіть x : ";
    cin >> x;
    cout << "Введіть y : ";
    cin >> y;
    cout << "Введіть z : ";
    cin >> z;
    logic(a, b);
    cout << convert(x, y, z) << endl;
    system("pause");
    return 0;
}

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
    cout << "� ������ ���������" << endl;
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
    cout << "����� x � ��������� ������ �������� ������� " << x << endl;
    cout << "����o x � �������������� ������ �������� ������� " << hex << x << endl;
    cout << "����� y � ��������� ������ �������� ������� " << y << endl;
    cout << "����o y � �������������� ������ �������� ������� " << hex << y << endl;
    cout << "����� z � ��������� ������ �������� ������� " << z << endl;
    cout << "����o z � �������������� ������ �������� ������� " << hex << z << endl;
    float S = s_calculation(x, y, z);

    return S;
}



int main()
{
    system("chcp 1251 && cls");
    Autor();
    int a, b;
    int x, y, z;
    cout << "������ � : ";
    cin >> a;
    cout << "������ b : ";
    cin >> b;
    cout << "������ x : ";
    cin >> x;
    cout << "������ y : ";
    cin >> y;
    cout << "������ z : ";
    cin >> z;
    logic(a, b);
    cout << convert(x, y, z) << endl;
    system("pause");
    return 0;
}

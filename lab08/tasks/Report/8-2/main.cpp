/*#include <iostream>
#include <clocale>

using namespace std;

void SoftwareDeweloper()
{
    setlocale(LC_ALL, "ukr");
    cout << "\n --------------------------------------------------------\n"
         << " | Kriukov Kostiantin, CUNTU, kostyan123452003@gmail.com |\n"
         << " | ������ ���������,   ����,  kostyan123452003@gmail.com |\n"
         << " -------------------(c) All Right Reserved ---------------\n\n\n\n" << endl;
}
int main()
{
    SoftwareDeweloper();
    return 0;
}*/

#include <iostream>
#include <clocale>
#include <conio.h>
#include <cmath>
#include <filessl.h>

using namespace std;

void SoftwareDeweloper()
{
    setlocale(LC_ALL, "ukr");
    cout << "\n --------------------------------------------------------\n"
         << " | Kriukov Kostiantin, CUNTU, kostyan123452003@gmail.com |\n"
         << " | ������ ���������,   ����,  kostyan123452003@gmail.com |\n"
         << " -------------------(c) All Right Reserved ---------------\n\n\n\n" << endl;
}
int main()
{
    system("chcp 1251 && cls");
    int a, b, x, y;
    cout << "������ a: "; cin >> a;
    cout << "������ b: "; cin >> b;
    x = a + 1;
    y = abs(b - 2);
    if(x < y) cout << "x ������ y";
    else cout << "x ����� y";
    getch();
    return 0;
}


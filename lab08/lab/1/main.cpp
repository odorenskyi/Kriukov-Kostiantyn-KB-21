#include <iostream> //���� ��������
#include <clocale>
#include <conio.h>
#include <cmath> // ϳ��������� �������� cmath

using namespace std;

int main() // ������� �������
{
    int x = 0, y = 0, z = 0; // ����� ��������
    double S = 0; // �� ����� ������

    setlocale(LC_ALL, "ukr"); // ���������� UTF-8

    cout << "������ x: "; //������� �������� 1
    cin >> x;

    cout << "������ y: "; // ������� �������� 2
    cin >> y;

    cout << "������ z: " << endl; // ������� �������� 3, ����� �����
    cin >> z;


    S = (3 * sin(sqrt(12 * pow(x, 2) / log10(x - 3)))) + 1/2 * z; // ����������� �����

    cout << "S ������� " << S << endl; // ���������
    _getch();
    return 0; //����� �������
}

#include <iostream>
#include <cmath>
#include <math.h>
//#include <ModuleKriukov.h>

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

int main()
{
    system("chcp 1251 && cls");
    int a, b;
    cout << "Введіть а : ";
    cin >> a;
    cout << "Введіть b : ";
    cin >> b;
    Autor();
    logic(a, b);
    return 0;
}

/*int main(){
    std::cout << true << std::endl;
    std::cout << false << std::endl;

    std::cout << std::boolalpha;

    std::cout << true << std::endl;
    std::cout << false << std::endl;
}*/

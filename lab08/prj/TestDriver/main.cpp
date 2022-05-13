#include <iostream>
#include <math.h>
#include "ModuleKriukov.h"

using namespace std;

int main()
{
    system("chcp 1251 && cls");
    float x[5] = {50, 30, 10, 90, 10};
    float y[5] = {60, 20, 5, 70, 15};
    float z[5] = {60, 10, 3, 30, 60};
    float result[5] = {0.822, 3.692, 0.784, 0.141, 0.784};
    float SS;
    for(int i = 0; i<5; i++){
        SS = (floor(s_calculation(x[i], y[i], z[i]) * 1000))/1000;
        if (SS == result[i]){
            cout << "TestCase ¹" << i+1 << " passed" << endl;
        }
        else cout << "TestCase ¹" << i+1 << " falled" << endl;
    }


}

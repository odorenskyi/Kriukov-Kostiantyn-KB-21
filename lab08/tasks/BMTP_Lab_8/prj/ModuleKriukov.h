#ifndef MODULEKRIUKOV_H_INCLUDED
#define MODULEKRIUKOV_H_INCLUDED

#include <cmath>
#include <math.h>
#include <iostream>

float s_calculation(float x, float y, float z){
    float S;
    S = pow((3 * sin(sqrt((12 * pow(x, 2)) / (log(x - 3))))), 2) + 1/2 * z;
    return S;

}

int main()
{
    int x = 010;
    std::cout << x;
    return 0;
}

#endif // MODULEKRIUKOV_H_INCLUDED

#include <cmath>
#include <math.h>

float s_calculation(float x, float y, float z){
    float S;
    S = pow((3 * sin(sqrt((12 * pow(x, 2)) / (log(x - 3))))), 2) + 1/2 * z;
    return S;

}

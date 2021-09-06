#include "stdio.h"
#include "math.h"

int calculate()
{
    float f1 = 1.11111111111111111111;
    float f2 = 4.44444444444444444444;

    float fSum = f1 + f2;
    float fSqr = sqrtf(f1);
    float fMul = f1 * f2;
    float fDiv = f1 / f2;
    float fPow = powf(f1, f2);
    float fSin = sinf(f1);

    double d1 = 1.11111111111111111111;
    double d2 = 4.44444444444444444444;

    double dSum = d1 + d2;
    double dSqr = sqrt(d1);
    double dMul = d1 * d2;
    double dDiv = d1 / d2;
    double dPow = pow(d1, d2);
    double dSin = sin(d1);

    printf("done\r\n");
    return (int) (fSin);
}

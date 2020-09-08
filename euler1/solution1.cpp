#include "solution1.h"

Solution1::Solution1(short L): a(3), b(5), topLimit(L - 1) {};

int Solution1::solve() {
    short mA = topLimit / a;
    short mB = topLimit / b;
    short mAb = topLimit / a / b;        
    return (mA * (mA + 1) * a + mB * (mB + 1) * b - mAb * (mAb + 1) * a * b) / 2;
};

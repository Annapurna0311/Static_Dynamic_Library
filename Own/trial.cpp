#include "math_operations.h"
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    cout << "gcd: " << gcd(a, b) << endl;
    cout << "lcm: " << lcm(a, b) << endl;

    return 0;
}

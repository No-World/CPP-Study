#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1 = 2.5, y = 4.7, a = 7, b;
    cout << x1 + (int)a % 3 * (int)(x1 + y) % 2 / 4 << endl;
    x1 = 3.5, y = 2.5, a = 2, b = 3;
    cout << (float)(a + b) / 2 - (int)x1 % (int)y << endl;
    int x2 = 8;
    cout << 'a' + x2 % 3 + 5 / 2 << endl;

    return 0;
}

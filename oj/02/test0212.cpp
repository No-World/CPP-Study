#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (0 <= a && a < 32768 && a % 2 == 0)
    cout << a / 4 + a % 4 /2 << " " << a / 2;

    else
    cout << "0 0";

    return 0;
}
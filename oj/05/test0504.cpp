#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 0, n, a;
    cin >> a >> n;
    for (int i = 1; i <= n; i++)
    {
        x += a * pow(10.0, i - 1) * (n + 1 - i);
    }
    printf("%d", x);

    return 0;
}
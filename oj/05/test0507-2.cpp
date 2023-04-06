#include <iostream>
using namespace std;
int main()
{
    int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sy, sm, sd;
    int ey, em, ed;
    int sum = 0, sum1 = 0;
    cin >> sy >> sm >> sd;
    cin >> ey >> em >> ed;
    for (int i = 1; i < sy; i++)
    {
        sum += 365;
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
            sum++;
    }
    for (int i = 1; i < sm; i++)
    {
        sum += a[i];
        if (i == 2 && (sy % 4 == 0 && sy % 100 != 0 || sy % 400 == 0))
            sum++;
    }
    sum += sd;
    for (int i = 1; i < ey; i++)
    {
        sum1 += 365;
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
            sum1++;
    }
    for (int i = 1; i < em; i++)
    {
        sum1 += a[i];
        if (i == 2 && (ey % 4 == 0 && ey % 100 != 0 || ey % 400 == 0))
            sum1++;
    }
    sum1 += ed;
    cout << sum1 - sum << endl;
    return 0;
}
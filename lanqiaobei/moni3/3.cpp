#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

bool is_leap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int get(int x)
{
    int res = 0;
    while (x)
    {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int work(int y, bool leap)
{

    int cnt = 0;

    for (int i = 1; i <= 12; i++)
    {
        int k = days[i];
        if (k == 2 && leap)
            k++;

        for (int j = 1; j <= k; j++)
        {
            if (get(y) == get(i) + get(k))
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{

    int res = 0;

    for (int y = 1900; y <= 9999; y++)
    {
        bool leapY = is_leap(y);

        res += work(y, leapY);
    }

    cout << res << "\n";
    return 0;
}
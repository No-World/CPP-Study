#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
const int N = 20, mod = 100000007;
long age[N];
int main()
{
    int n;
    cin >> n;
    // 求第n个月的兔子数量
    // 第n月初，2岁以上的兔子会生宝宝
    age[0] = 1;
    int month = 1;
    while (month < n)
    {
        month++;
        long baby = 0;
        for (int i = 11; i >= 0; i--)
        {
            age[i + 1] = age[i];
            if (i + 1 >= 2)
            {
                baby = (baby + age[i + 1]) % mod;
            }
        }
        // if (month > 6000) cout << age[o] << ';
        age[0] = baby;
        // printf("month %d: ", month);
        // for (int i = 0; i <= 12; i++) cout << age[i] << ';
        // cout << endl;
    }
    long res = 0;
    for (int i = 0; i < 12; i++)
    {
        res = (res + age[i]) % mod;
    }
    cout << res << endl;
    return 0;
}
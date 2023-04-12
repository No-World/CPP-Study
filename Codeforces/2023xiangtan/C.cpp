#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int aa[4], p[200010], x[200010];
void isPrime(int n)
{
    int i, j, k = 0;
    for (i = 2; i <= n; i++)
    {
        if (x[i] == 0)
        {
            k++;
            p[k] = i;
        }
        for (j = 1; j <= k && i * p[j] <= n; j++)
        {
            x[i * p[j]] = 1;
            if (i % p[j] == 0)
            {
                break;
            }
        }
    }
} // 质数筛
bool check(int n)
{ // unknow
    return !x[n] ? true : false;
} // 判断质数
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    isPrime(200000);

    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, ans = 0; // ans代表偶数的个数
        cin >> a >> b >> c;
        aa[1] = 0;
        aa[2] = 0;
        aa[3] = 0; // 代表a,b,c是否为偶数
        if (a % 2 == 0)
        {
            aa[1] = 1;
            ans++;
        }
        if (b % 2 == 0)
        {
            aa[2] = 1;
            ans++;
        }
        if (c % 2 == 0)
        {
            aa[3] = 1;
            ans++;
        }
        if (a == 0 && b == 0 && c == 0)
        {
            cout << 'R' << endl;
            continue;
        }
        if (a == 0)
        {
            int flag = 2;
            if (aa[2] == 1 && aa[3] == 1)
            {
                flag = 2;
            }
            else
                flag = 1;
            if (b == 1 && c == 1)
                flag = 2;
            if (flag == 2)
                cout << 'R' << endl;
            else
                cout << 'P' << endl;
            continue;
        }
        if (b == 0)
        {
            int flag = 2;
            if (aa[1] == 1 && aa[3] == 1)
            {
                flag = 2;
            }
            else
                flag = 1;
            if (a == 1 && c == 1)
                flag = 2;
            if (flag == 2)
                cout << 'R' << endl;
            else
                cout << 'P' << endl;
            continue;
        }
        if (c == 0)
        {
            int flag = 2;
            if (aa[2] == 1 && aa[1] == 1)
            {
                flag = 2;
            }
            else
                flag = 1;
            if (b == 1 && a == 1)
                flag = 2;
            if (flag == 2)
                cout << 'R' << endl;
            else
                cout << 'P' << endl;
            continue;
        }

        if (ans == 2 || ans == 0)
            cout << 'P' << endl;
        else if (ans == 3)
        {
            cout << 'R' << endl;
        }
        else
        {
            int flag = 1;
            if (aa[1] == 1)
            {
                if (check(a + c) && check(a + b))
                    flag = 2;
                if (b == 1 && c == 1)
                    flag = 2; // 有两个1和一个偶数肯定过
            }
            else if (aa[2] == 1)
            {
                if (check(b + c) && check(a + b))
                    flag = 2;
                if (c == 1 && a == 1)
                    flag = 2;
            }
            else if (aa[3] == 1)
            {
                if (check(c + a) && check(c + b))
                    flag = 2;
                if (b == 1 && a == 1)
                    flag = 2;
            }
            if (flag == 2)
                cout << 'R' << endl;
            else
                cout << 'P' << endl;
        }
    }
    return 0;
}

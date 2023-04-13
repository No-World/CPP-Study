// Problem: F. 342 and Xiangqi
// Contest: Codeforces - The 17th Heilongjiang Provincial Collegiate Programming Contest
// URL: https://codeforces.com/gym/103688/problem/F
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <queue>
// #include <map>
// #include <vector>
using namespace std;
const int inf = 0x3f3f3f3f, N = 1010;

inline void Solution()
{
    int a, b, x, y, ans = 0;
    cin >> a >> b >> x >> y;

    if (a == x)
    {
        a = 0, x = 0;
    }
    if (a == y)
    {
        a = 0, y = 0;
    }
    if (b == x)
    {
        b = 0, x = 0;
    }
    if (b == y)
    {
        b = 0, y = 0;
    }
    if (a < b)
        swap(a, b);
    if (x < y)
        swap(x, y);
    if (x < a)
        swap(x, a);
    if (y < b)
        swap(y, b);
    if (a == 1)
    {
        if (x < 4)
            ans += 1;
        else if (x == 4)
            ans += 2;
        else if (x < 7)
            ans += 3;
        else
            ans += 4;
    }
    else if (a == 2)
    {
        if (x == 4)
            ans += 1;
        else if (x == 3 || x < 7)
            ans += 2;
        else
            ans += 3;
    }
    else if (a == 3)
    {
        if (x == 4)
            ans += 1;
        else if (x < 7)
            ans += 2;
        else
            ans += 3;
    }
    else if (a == 4)
    {
        if (x < 7)
            ans += 1;
        else
            ans += 2;
    }
    else if (a == 5)
    {
        if (x < 7)
            ans += 2;
        else
            ans += 1;
    }
    else if (a == 6)
        ans += 1;
    if (b == 1)
    {
        if (y < 4)
            ans += 1;
        else if (y == 4)
            ans += 2;
        else if (y < 7)
            ans += 3;
        else
            ans += 4;
    }
    else if (b == 2)
    {
        if (y == 4)
            ans += 1;
        else if (y == 3 || y < 7)
            ans += 2;
        else
            ans += 3;
    }
    else if (b == 3)
    {
        if (y == 4)
            ans += 1;
        else if (y < 7)
            ans += 2;
        else
            ans += 3;
    }
    else if (b == 4)
    {
        if (y < 7)
            ans += 1;
        else
            ans += 2;
    }
    else if (b == 5)
    {
        if (y < 7)
            ans += 2;
        else
            ans += 1;
    }
    else if (b == 6)
        ans += 1;
    cout << ans << endl;
}

int main(int argc, char const *argv[])
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}
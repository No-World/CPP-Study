// Problem: 猫猫与密信
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/54877/B
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e4 + 10;
// const ll INF = __LONG_LONG_MAX__;

char a[N];

inline void Solution()
{
    string s;
    cin >> s;
    s = " " + s;
    int n = s.length();
    bool check = 0;              // love
    for (int i = 1; i <= n; i++) // lve//lov//ove1//loe1
    {
        if (s[i] == 'o' && s[i + 1] == 'v' && s[i + 2] == 'e')
        {
            check = 1;
            break;
        }
        else if (s[i] == 'l' && s[i + 1] == 'o' && s[i + 2] == 'e')
        {
            check = 1;
            break;
        }
        else if (s[i] == 'l' && s[i + 1] == 'o' && s[i + 2] == 'v')
        {
            check = 1;
            break;
        }
        else if (s[i] == 'l' && s[i + 1] == 'v' && s[i + 2] == 'e')
        {
            check = 1;
            break;
        }
    }
    if (check)
    {
        cout << "YES";
    }
    else if (check == 0)
    {
        cout << "NO";
    }
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}
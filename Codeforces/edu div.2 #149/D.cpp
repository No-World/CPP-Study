// Problem: D. Bracket Coloring
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1837/problem/D
// Memory Limit: 512 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
#include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    int n;
    char s[N];
    cin >> n >> s;
    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    string s1;
    int test = 0;
    f(i, n)
    {
        if (s[i] == '(')
            s1.push_back(')');
        else
            s1.push_back('(');
    }
    int noc = 0, ncc = 0, noi = 0, nci = 0;
    f(i, n)
    {
        if (noc > ncc && s1[i] == ')')
            ncc++;
        else if (noc == ncc && s1[i] == ')')
            nci++;
        else
            noc++;
    }
    if (nci != 0 || nci + ncc != noc)
        test = 1;
    if (test == 0)
    {
        cout << 1 << endl;
        f(i, n)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        int noc = 0, ncc = 0, noi = 0, nci = 0;
        f(i, n)
        {
            if (noc > ncc && s[i] == ')')
                ncc++;
            else if (noc == ncc && s[i] == ')')
                nci++;
            else
                noc++;
        }
        if (nci + ncc != noc)
            cout << -1 << endl;
        else if (nci == 0)
        {
            cout << 1 << endl;
            f(i, n)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else if (noc == nci)
        {
            cout << 1 << endl;
            f(i, n)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << 2 << endl;
            int noc1 = 0, ncc1 = 0, noi = 0, nci1 = 0;
            f(i, n)
            {
                if (noc1 > ncc1 && s[i] == ')')
                {
                    ncc1++;
                    cout << 1 << " ";
                }
                else if (noc1 == ncc1 && s[i] == ')')
                {
                    cout << 2 << " ";
                }
                else
                {
                    noc1++;
                    if (noc1 <= noc - nci)
                        cout << 1 << " ";
                    else
                        cout << 2 << " ";
                }
            }
            cout << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    int T = 1;
    scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}
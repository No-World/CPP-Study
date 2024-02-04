// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

string s, S = "";

void Solution(int __T)
{
    S = "";
    int numB = 0, numb = 0;
    cin >> s;
    for (int i = s.size() - 1; i > -1; i--)
    {
        if (s[i] == 'B')
        {
            numB++;
        }
        else if (s[i] == 'b')
        {
            numb++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (numb)
            {
                numb--;
            }
            else
            {
                S += s[i];
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (numB)
            {
                numB--;
            }
            else
            {
                S += s[i];
            }
        }
    }
    // S.push_back(0);
    for (int i = S.size() - 1; i > -1; i--)
    {
        cout << S[i];
    }
    cout << '\n';
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int __T = 1;
    cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}
// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
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
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char s[N];

void Solution(int __T)
{
    int num0 = 0, num1 = 0;
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            num0++;
        }
        else
        {
            num1++;
        }
    }
    if (num0 == num1)
    {
        printf("0\n");
        return;
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            num1--;
        }
        else
        {
            num0--;
        }
        if (num1 < 0 || num0 < 0)
        {
            printf("%d\n", len - i);
            return;
        }
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}
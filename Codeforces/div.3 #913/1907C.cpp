// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
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
int num[30];

void Solution(int __T)
{
    int n, ans = 0;
    char c = 0;
    scanf("%d%s", &n, s);
    for (int i = 0; i < n; i++)
    {
        num[s[i] - 'a']++;
    }
    while (1)
    {
        sort(num, num + 26);
        if (!num[24])
        {
            break;
        }
        num[25]--, num[24]--;
    }

    printf("%d\n", num[25]);
    num[25] = 0;
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
// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

vector<int> a;

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    while (n--)
    {
        getchar();
        char c;
        int x, y;
        scanf("%c %d", &c, &x);
        if (c == '+')
        {
            scanf("%d", &y);
            a.insert(a.begin() + x, y);
        }
        else if (c == '-')
        {
            a.erase(a.begin() + x);
        }
        else if (c == '*')
        {
            scanf("%d", &y);
            a[x] = y;
        }
        else
        {
            bool flag = 0;
            for (auto i = a.begin(); i < a.end(); i++)
            {
                if (*i == x)
                {
                    printf("%d\n", i - a.begin());
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                printf("Failed\n");
            }
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
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}
#include <algorithm>
#include <cstring>
#include <numeric>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10, mod = 1e9 + 7, inf = 0x3f3f3f3f;
const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

queue<int> a, b;

void Solute()
{
    int n, x;
    scanf("%d", &n);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        a.push(x);
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        b.push(x);
    }
    x = 0;
    while (!a.empty() && !b.empty())
    {
        x++;
        if (x > 1e7)
        {
            printf("-1\n");
            return;
        }
        // printf("%d:%d %d\n", x, a.front(), b.front());
        if (a.front() > b.front())
        {
            a.push(b.front()), a.push(a.front());
            a.pop(), b.pop();
        }
        else
        {
            b.push(a.front()), b.push(b.front());
            a.pop(), b.pop();
        }
    }
    printf("%d %s\n", x, (a.empty() ? "Cola" : "koala"));
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int __T = 1;
    // scanf("%d", &__T);
    // cin >> __T;
    for (int i = 0; i < __T; i++)
    {
        Solute();
    }
    return 0;
}
#include <queue>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
priority_queue<int, vector<int>, greater<int>> qee;
queue<int> QEE;
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[m + 10];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        QEE.push(x);
    }
    for (int i = 1; i <= m; i++)
    {
        qee.push(QEE.front());
        QEE.pop();
    }
    
    for (int i = 1; !QEE.empty(); i++)
    {
        int x = qee.top() + QEE.front();
        qee.pop();
        QEE.pop();
        qee.push(x);
    }
    long long ans = 0;
    while (!qee.empty())
    {
        ans = qee.top();
        qee.pop();
    }

    printf("%lld\n", ans);
    return 0;
}
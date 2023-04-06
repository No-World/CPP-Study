#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;

const int N = 200010, INF = 0x3f3f3f3f;
int n, t, step[N];

void bfs()
{
    memset(step, 0x3f, sizeof(step));
    queue<int> q;
    q.push(n);
    step[n] = 0;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        if (f == t)
        {
            return;
        }
        if (f > 1 && step[f - 1] == INF)
        {
            q.push(f - 1);
            step[f - 1] = step[f] + 1;
        }
        if (f <= t)
        {
            if (step[f + 1] == INF)
            {
                q.push(f + 1);
                step[f + 1] = step[f] + 1;
            }
            if (step[f * 2] == INF)
            {
                q.push(f * 2);
                step[f * 2] = step[f] + 1;
            }
        }
    }
}

int main()
{
    while (scanf("%d%d", &n, &t) != EOF)
    {
        bfs();
        printf("%d\n", step[t]);
    }
    return 0;
}
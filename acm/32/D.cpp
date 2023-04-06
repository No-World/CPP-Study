#include <queue>
#include <cstdio>
using namespace std;
queue<int> qee;
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        qee.push(i);
    }
    for (int i = 1; !qee.empty(); i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", qee.front());
            qee.pop();
        }
        else
        {
            qee.push(qee.front());
            qee.pop();
        }
    }

    return 0;
}
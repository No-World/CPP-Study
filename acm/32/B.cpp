#include <cstdio>
#include <stack>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    stack<int> stk;
    int i = 1;
    for (int j = 1; j <= n; j++)
    {
        int x;
        scanf("%d", &x);
        stk.push(x);
        for (; i <= n; i++)
        {
            if (stk.empty() || stk.top() != i)
            {
                break;
            }
            stk.pop();
        }
    }
    if (stk.empty())
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
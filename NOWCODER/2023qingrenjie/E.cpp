#include <queue>
#include <cstdio>
using namespace std; // 这个不是头文件但我也不晓得叫什么专业定语反正要和头文件一起开就是了！
int main()
{
    int n;
    scanf("%d", &n);
    priority_queue<int> qee;
    for (int i = 1; i <= n; i++)
    {
        int k;
        scanf("%d", &k);
        qee.push(k);
    }
    long long ans = 0, sum = 1;
    for (int i = 1; i <= n / 2; i++)
    {
        sum *= 2;
        ans += 1.0 * qee.top() / sum;
        qee.pop();
    }
    printf("%d", ans);
    return 0;
}
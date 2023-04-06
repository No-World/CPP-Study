#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
const int N = 1e6 + 10;
struct ALL
{
    int a, b, c;
} w[N], ss[N];
vector<int> e[N];
void add(int x, int y)
{
    e[x].push_back(y);
}
bool way[N]; // 记录dfs过程中走过的节点
ALL dfs(int x)
{
    way[x] = 1;
    if (e[x].size() == 0)
    {
        return w[x];
    }
    int len = e[x].size(); // 判断e[x]的子节点是否为空
    for (int i = 0; i < len; i++)
    {
        ALL num = {0, 0, 0}; // 初始化子节点的三种颜色数量为0
        if (!way[e[x][i]])   // 如果没走过该子节点
        {
            num = dfs(e[x][i]);
        }
        w[x].a += num.a;
        w[x].b += num.b;
        w[x].c += num.c;
    }
    return w[x];
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m); // 输入节点数n，根节点m
    for (int i = 1; i <= n - 1; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y); // 输入连通的两个节点
        add(x, y);
        add(y, x);
    }
    for (int i = 1; i <= n; i++) // 记录每个节点的颜色
    {
        int a;
        scanf("%d", &a);
        if (a == 0)
        {
            w[i].a++;
        }
        else if (a == 1)
        {
            w[i].b++;
        }
        else
        {
            w[i].c++;
        }
        ss[i] = w[i];
    }
    dfs(m);
    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", w[i].a - ss[i].a, w[i].b - ss[i].b, w[i].c - ss[i].c);
    }
    return 0;
}
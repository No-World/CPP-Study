#include <iostream>
using namespace std;
long long fa[5000100], n, k, a[5000100], cc;
int find(int x)
{
    if (x != fa[x])
    {
        fa[x] = find(fa[x]);
    }
    return fa[x];
}
void add(int u, int v)
{
    int t1 = find(u), t2 = find(v);
    if (t1 != t2)
    {
        fa[t1] = t2;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        cc = 0; // 曹操的位置
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            fa[i] = i;
            cin >> a[i];
            if (a[i] == 1)
                cc = i;
        }

        for (int i = 1; i <= k; i++)
        {
            int x, y; // x地与y地
            cin >> x >> y;
            add(x, y);
        }
        for (int i = 1; i <= n; i++) // 枚举n个地点
        {
            if (i == cc) // 如果该位置是曹操，输出1
            {
                cout << "1"
                     << " ";
                continue;
            }
            else if (a[i] == 0) // 如果该位置无人，输出0
            {
                cout << "0"
                     << " ";
                continue;
            }
            else
            {
                if (find(cc) == find(i)) // 如果曹操能找到该位置的英杰，输出该英杰的数字
                {
                    cout << a[i] << " ";
                    continue;
                }
                else // 否则输出-1
                {
                    cout << "-1"
                         << " ";
                    continue;
                }
            }
        }
        cout << endl;
    }
}

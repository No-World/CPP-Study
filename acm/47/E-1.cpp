#include <iostream>
using namespace std;
const int MAXN = 1e5 + 10;
int parent[MAXN];
long long counter = 0;

int find(int x)
{
    while (x != parent[x])
    {
        if (x < parent[x])
        {
            // 按秩合并和路径压缩
            parent[x] = parent[parent[x]];
        }
        x = parent[x];
        counter++;
    }

    return x;
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    parent[a] = b;
}

int main()
{
    int n, A, B, ans = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    for (int i = 1; i <= n; i++)
    {
        cin >> A >> B;
        merge(A, B);
    }

    for (int i = 1; i <= n; i++)
        if (i == find(i))
            ans++;

    cout << counter << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
string s;
int n, k, i;
int ran[100010], tmp[100010], sa[100010], c[100010];

bool cmp(int i, int j) // 根据题意搞出这个cmp函数
{
    if (ran[i] != ran[j])
        return ran[i] < ran[j];
    else
    {
        int ri, rj;

        if (i + k <= n)
            ri = ran[i + k];
        else
            ri = -1;

        if (j + k <= n)
            rj = ran[j + k];
        else
            rj = -1;

        return ri < rj;
    }
}

void get_sahh(int sa[]) // 求sa数组的函数
{
    for (i = 0; i <= n; i++)
    {
        sa[i] = i;
        if (i < n)
            ran[i] = c[i];
        else
            ran[i] = -1;
    }

    for (k = 1; k <= n; k *= 2)
    {
        sort(sa, sa + n + 1, cmp);
        tmp[sa[0]] = 0;

        for (int i = 1; i <= n; i++)
            tmp[sa[i]] = tmp[sa[i - 1]] + (cmp(sa[i - 1], sa[i]) ? 1 : 0);

        for (int i = 0; i <= n; i++)
            ran[i] = tmp[i];
    }
}

int main()
{
    while (~scanf("%d", &n))
    {
        cin >> s;
        int a = n, b = n;
        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'a')
            {
                if (a == n)
                    c[i] = (n - a) % n;
                else
                    c[i] = (n - a + i) % n;
                a = i;
            }
            else
            {
                if (b == n)
                    c[i] = (n - b) % n;
                else
                    c[i] = (n - b + i) % n;
                b = i;
            }
        }
        get_sahh(sa);
        for (i = 1; i <= n; i++)
            cout << sa[i] + 1 << " ";
        cout << endl;
    }
    return 0;
}

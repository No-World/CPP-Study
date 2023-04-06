#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string s;
LL q;
LL A[100005], B[100005], C[100005];
int main()
{
    cin >> s;
    LL n = s.size();
    for (int i = 1; i <= n; i++)
    {
        A[i] = A[i - 1] + (s[i - 1] == 'A');
        B[i] = B[i - 1] + (s[i - 1] == 'B');
        C[i] = C[i - 1] + (s[i - 1] == 'C');
    }
    cin >> q;
    while (q--)
    {
        LL t, x;
        cin >> t >> x;
        x++;
        while (t)
        {
            LL cntA = A[n] - A[x - 1];
            LL cntB = B[n] - B[x - 1];
            LL cntC = C[n] - C[x - 1];
            LL len = cntA + cntB + cntC;
            if (t >= len)
                t %= len;
            if (t == 0)
                t = len;
            if (t <= cntA)
                x = cntA - t + 1;
            else if (t <= cntA + cntB)
                x = cntA + (t - cntA) * 2 - 1;
            else
                x = n - cntC + t - cntA - cntB;
            t--;
        }
        if (s[x - 1] == 'A')
            cout << 'A' << endl;
        else if (s[x - 1] == 'B')
            cout << 'C' << endl;
        else
            cout << 'B' << endl;
    }
    return 0;
}

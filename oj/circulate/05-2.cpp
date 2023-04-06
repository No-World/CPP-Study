#include <iostream>
using namespace std;
int a[1000], b[1000], c[1000], d[1000], e[1000], f[1000];
int qn[1000], bn[1000], lw[1000];
char gb[1000], xb[1000];
string name[1000];
int main()
{
    int n, m, x = 0, max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> name[i] >> qn[i] >> bn[i] >> gb[i] >> xb[i] >> lw[i];
        if (qn[i] > 80 && lw[i] > 0)
            a[i] = 1;
        else
            a[i] = 0;
        if (qn[i] > 85 && bn[i] > 80)
            b[i] = 1;
        else
            b[i] = 0;
        if (qn[i] > 90)
            c[i] = 1;
        else
            c[i] = 0;
        if (qn[i] > 85 && xb[i] == 'Y')
            d[i] = 1;
        else
            d[i] = 0;
        if (bn[i] > 80 && gb[i] == 'Y')
            e[i] = 1;
        else
            e[i] = 0;
        f[i] = 8000 * a[i] + 4000 * b[i] + 2000 * c[i] + 1000 * d[i] + 850 * e[i];
    }
    for (int i = 1; i <= n; i++)
    {
        x = f[i] + x;
        if (f[i] > max)
        {
            max = f[i];
            m = i;
        }
    }
    cout << name[m] << "\n"
         << max << "\n"
         << x;
    system("pause");
    return 0;
}
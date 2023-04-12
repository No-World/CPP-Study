#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
string a[1010];
int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    while (m--)
    {
        string b;
        cin >> b;
        for (int i = 0; i < n; i++)
        {
            int lena = a[i].length(), lenb = b.length(), k = 0, cnt = 0;
            for (int j = 0; j < lena; j++)
            {
                if (k == lenb)
                {
                    break;
                }
            }
        }
    }

    return 0;
}

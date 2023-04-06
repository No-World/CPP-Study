#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    string s1[1010], s2[1010], s3 = "jlstxdy";
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        cin >> s1[i] >> s2[i];
    }
    for (int i = 1; i <= m; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= n; j++)
        {
            if (s1[j] == s)
            {
                cout << s2[j] << '\n';
                break;
            }
            else if (s2[j] == s)
            {
                cout << s1[j] << '\n';
                break;
            }
            else if (j == n)
            {
                cout << s3 << '\n';
            }
        }
    }

    return 0;
}
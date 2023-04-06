#include <iostream>
using namespace std;
int s[5][5],sum,max1,n,ans[10010000];
int main()
{
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        max1 = 0;
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= 4; j++)
            {
                cin >> s[i][j];
            }
        }
        for (int i = 1; i <= 4; i++)
        {
            sum = 0;
            for (int j = 1; j <= 4; j++)
            {
                sum += s[i][j];
                if (sum > max1)
                    max1 = sum;
            }
        }
        for (int j = 1; j <= 4; j++)
        {
            sum = 0;
            for (int i = 1; i <= 4; i++)
            {
                sum += s[i][j];
                if (sum > max1)
                    max1 = sum;
            }
        }
        ans[k] = max1;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
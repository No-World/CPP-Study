#include <cstdio>
using namespace std;

const int MAX = 1e3 + 5;
char a[MAX][1001];

int main()
{
    int n, x = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", a[i] + 1);
        for (int j = 1; j <= 1000; j++)
        {
            if (a[i][j] == '1' || a[i][j] == '2' || a[i][j] == '3' || a[i][j] == '4' || a[i][j] == '5' || a[i][j] == '6' || a[i][j] == '7' || a[i][j] == '8' || a[i][j] == '9' || a[i][j] == '0')
                x++;
        }
        printf("%d\n", x);
        x = 0;
    }
    return 0;
}
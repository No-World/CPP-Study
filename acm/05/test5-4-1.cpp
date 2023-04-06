#include <cstdio>
using namespace std;

char a[100001];

int main()
{
    scanf("%s", a + 1);
    int t = 0;
    for (int i = 1; i <= 100000; i++)
    {
        if ((a[i] == 'A' || a[i] == 'C' || a[i] == '?'))
            if ((a[i] == 'A' && a[i + 1] == 'A') || (a[i] == 'C' && a[i + 1] == 'C'))
            {
                t++;
                i++;
            }
    }
    printf("%d", t);
    return 0;
}
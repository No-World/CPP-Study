#include <cstdio>
#include <iostream>
using namespace std;

int a[5][5], mi[5] = {1000010, 1000010, 1000010, 1000010, 1000010}, ma[5];

int main()
{
    bool yes = false;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            ma[i] = max(ma[i], a[i][j]);
            // printf("%d %d\n", i, ma[i]);
        }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        // {
            mi[i] = min(mi[i], a[j][i]);
        //     printf("%d %d\n", i, mi[i]);
        // }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (ma[i] == mi[j])
            {
                printf("%d %d %d\n", i + 1, j + 1, ma[i]);
                yes = true;
            }
    if (!yes)
        printf("not found");

    return 0;
}
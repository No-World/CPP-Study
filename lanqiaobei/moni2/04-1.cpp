#include <cstdio>
#include <iostream>
using namespace std;
char a[31][61];
int b[31][61];
int main()
{
    int ans = 0, mans = 0;
    for (int i = 1; i <= 30; i++)
        scanf("%s", a[i] + 1);
    // printf("%c", a[1][1]);
    for (int i = 1; i <= 30; i++)
    {
        for (int j = 1; j <= 60; j++){
        b[i][j] = max(b[i][j - 1], b[i - 1][j]) + a[i][j] - '0';
        printf("%d %d\n", a[i][j] - '0', b[i][j]);}
    }
    printf("%d", b[30][60]);

    return 0;
}
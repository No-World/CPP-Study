#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char a[30], b[30];
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        scanf("%s %s", a + 1, b + 1);
        int a1 = strlen(a + 1), b1 = strlen(b + 1);
        if (a1 != b1)
        {
            printf("N\n");
        }
        else
        {
            for (int i = 1; a[i]; i++)
            {
                if ((a[i] >= 'a' && a[i] <= 'c') || (a[i] >= 'A' && a[i] <= 'C'))
                {
                    a[i] = '2';
                }
                else if ((a[i] >= 'd' && a[i] <= 'f') || (a[i] >= 'D' && a[i] <= 'F'))
                {
                    a[i] = '3';
                }
                else if ((a[i] >= 'g' && a[i] <= 'i') || (a[i] >= 'G' && a[i] <= 'I'))
                {
                    a[i] = '4';
                }
                else if ((a[i] >= 'j' && a[i] <= 'l') || (a[i] >= 'J' && a[i] <= 'L'))
                {
                    a[i] = '5';
                }
                else if ((a[i] >= 'm' && a[i] <= 'o') || (a[i] >= 'M' && a[i] <= 'O'))
                {
                    a[i] = '6';
                }
                else if ((a[i] >= 'p' && a[i] <= 's') || (a[i] >= 'P' && a[i] <= 'S'))
                {
                    a[i] = '7';
                }
                else if ((a[i] >= 't' && a[i] <= 'v') || (a[i] >= 'T' && a[i] <= 'V'))
                {
                    a[i] = '8';
                }
                else if ((a[i] >= 'w' && a[i] <= 'z') || (a[i] >= 'W' && a[i] <= 'Z'))
                {
                    a[i] = '9';
                }
            }
            for (int i = 1; i <= a1; i++)
            {
                // printf("%d %d ", a[i], b[i]);
                if (i == a1 && a[i] == b[i])
                    printf("Y\n");
                else if (a[i] != b[i])
                {
                    printf("N\n");
                    break;
                }
            }
        }
    }
    return 0;
}
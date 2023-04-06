#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char n[110];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char N = 'N';
        int  Z = 0, Y = 0;
        memset(n, 0, sizeof(n));
        scanf("%s", n + 1);
        int L = strlen(n + 1);
        for (int i = 1; i <= L; i++)
        {
            if ((N == 'N' && n[i] == 'W') || (N == 'W' && n[i] == 'S') || (N == 'S' && n[i] == 'E') || (N == 'E' && n[i] == 'N'))
            {
                Z++;
            }
                        else if ((n[i] == 'N' && N == 'W') || (n[i] == 'W' && N == 'S') || (n[i] == 'S' && N == 'E') || (n[i] == 'E' && N == 'N'))
            {
                Y++;
            }
            N = n[i];
        }
        if (Z >= Y)
        {
            printf("CCW\n");
        }
        else
        {
            printf("CW\n");
        }
    }

    return 0;
}
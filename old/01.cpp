#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char s[510];
int main()
{
    scanf("%s", s + 1);
    int len = strlen(s + 1);
    for (int i = 1; i <= len; i++)
    {
        if (s[i] <= 'z' && s[i] >= 'a')
        {
            printf("%c", s[i] - 'a' + 'A');
        }
        else
        {
            printf("%c", s[i] - 'A' + 'a');
        }
    }

    return 0;
}
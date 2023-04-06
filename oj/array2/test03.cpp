#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n, aj = 0, bj = 0, cj = 0;
    string a, b, c;
    scanf("%d", &n);
    while (n--)
    {
        cin >> a >> b >> c;
        if (a == "right")
            aj += 10;
        else if (a == "wrong")
            aj -= 10;
        if (b == "right")
            bj += 10;
        else if (b == "wrong")
            bj -= 10;
        if (c == "right")
            cj += 10;
        else if (c == "wrong")
            cj -= 10;
    }
    if (aj > bj && bj > cj)
        printf("(1,%d)\n(2,%d)\n(3,%d)", aj, bj, cj);
    else if (aj > cj && cj > bj)
        printf("(1,%d)\n(3,%d)\n(2,%d)", aj, cj, bj);
    else if (bj > aj && aj > cj)
        printf("(2,%d)\n(1,%d)\n(3,%d)", bj, aj, cj);
    else if (bj > cj && cj > aj)
        printf("(2,%d)\n(3,%d)\n(1,%d)", bj, cj, aj);
    else if (cj > aj && aj > bj)
        printf("(3,%d)\n(1,%d)\n(2,%d)", cj, aj, bj);
    else if (cj > bj && bj > aj)
        printf("(3,%d)\n(2,%d)\n(1,%d)", cj, bj, aj);
    else if (aj == bj && bj > cj)
        printf("(1,%d)(2,%d)\n(3,%d)", aj, bj, cj);
    else if (aj == cj && cj > bj)
        printf("(1,%d)(3,%d)\n(2,%d)", aj, cj, bj);
    else if (bj == aj && aj > cj)
        printf("(2,%d)(1,%d)\n(3,%d)", bj, aj, cj);
    else if (bj == cj && cj > aj)
        printf("(2,%d)(3,%d)\n(1,%d)", bj, cj, aj);
    else if (cj == aj && aj > bj)
        printf("(3,%d)(1,%d)\n(2,%d)", cj, aj, bj);
    else if (cj == bj && bj > aj)
        printf("(3,%d)(2,%d)\n(1,%d)", cj, bj, aj);
    else if (aj > bj && bj == cj)
        printf("(1,%d)\n(2,%d)(3,%d)", aj, bj, cj);
    else if (aj > cj && cj == bj)
        printf("(1,%d)\n(3,%d)(2,%d)", aj, cj, bj);
    else if (bj > aj && aj == cj)
        printf("(2,%d)\n(1,%d)(3,%d)", bj, aj, cj);
    else if (bj > cj && cj == aj)
        printf("(2,%d)\n(3,%d)(1,%d)", bj, cj, aj);
    else if (cj > aj && aj == bj)
        printf("(3,%d)\n(1,%d)(2,%d)", cj, aj, bj);
    else if (cj > bj && bj == aj)
        printf("(3,%d)\n(2,%d)(1,%d)", cj, bj, aj);
    else if (aj == bj && bj == cj)
        printf("(1,%d)(2,%d)(3,%d)", aj, bj, cj);
    
    return 0;
}
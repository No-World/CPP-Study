#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int min1 = a + b + c;
    min1 = min(a * 2 + b * 2, min1);
    min1 = min(a * 2 + c * 2, min1);
    min1 = min(b * 2 + c * 2, min1);
    printf("%d", min1);
    return 0;
}
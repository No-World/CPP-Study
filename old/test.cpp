#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 2, c = 3, d = 1, e = 2, f = 3;
    printf("%d %d %d %d\n", a = b = c, a = b == c, a == (b = c), a == (b == c));
    printf("%d %d %d %d\n", d = e = f, d, e, f);
    printf("%d %d %d %d\n", d = e == f, d, e, f);
    printf("%d %d %d %d\n", d == (e = f), d, e, f);
    printf("%d %d %d %d\n", d == (e == f), d, e, f);

    return 0;
}
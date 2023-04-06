#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    long long N, a, b, c, ans;
    scanf("%lld%lld%lld%lld", &N, &a, &b, &c);
    ans = N / a + N / b + N / c - 2 * (N / (a * b)) - 2 * (N / (c * b)) - 2 * (N / (a * c)) + 4 * (N / (a * b * c));
    printf("%lld\n", ans);
    return 0;
}
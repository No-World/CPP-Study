#include <cstdio>
using namespace std;
const long long MOD = 1e9 + 7;
int main()
{
    double a, v1, v2, v3;
    scanf("%lf%lf%lf%lf", &a, &v1, &v2, &v3);
    double t = a / (v1 + v2) + (a - a / (v1 + v2) * v1) / v3;
    printf("%.2lf", t);
    return 0;
}
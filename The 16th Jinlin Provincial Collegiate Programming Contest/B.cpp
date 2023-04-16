#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
typedef long long ll;
const double Num = 1e-8;
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        double a;
        scanf("%d", &a);
        double l = 0, r = 2000;
        while (r - l > Num)
        {
            double mid = (l + r) / 2;
            if (mid * (mid * mid + a) - a > a * a)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        printf("%.6lf\n", l);
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long ans[5], a1, b1, c1, a2, b2, c2, n, x, y;
int main()
{
    cin >> n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if (a1 == 0 || b2 == 0)
    {
        swap(a1, a2);
        swap(b1, b2);
        swap(c1, c2);
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        if (a2 * x + b2 * y > c2)
        {
            if (a1 * x + b1 * y + c1 > 0)
                ans[1]++;
            else
                ans[2]++;
        }
        else
        {
            if (a1 * x + b1 * y + c1 > 0)
                ans[3]++;
            else
                ans[4]++;
        }
    }
    sort(ans + 1, ans + 4 + 1);
    cout << ans[1] << " " << ans[2] << " " << ans[3] << " " << ans[4];
    return 0;
}

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int cx(int x)
{
    x = x - 1;
    int ans = 1;
    if (x <= 0)
        return 1;
    while (x)
    {
        ans *= 10;
        x--;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = n,   k = 0;
        while (m)
        {
            m = m / 10;
            k++;
        }
        int b = k, a = 0, q = 0;
        if (k  == 1)
            cout << n << endl;
        else
        {
            int ans = 0;
            int y = n / cx(k);

            while (b)
            {

                ans *= 10;
                ans += y;
                b--;
            }

            if (n >= ans)
                cout << 9 * (k - 1) + y << endl;
            else
                cout << 9 * (k - 1) + y - 1 << endl;
        }
    }
    return 0;
}
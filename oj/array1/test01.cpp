#include <iostream>
using namespace std;

int main()
{
    int n, a, b, ma, mi;
    cin >> n;
    b = n;
    while (b--)
    {
        cin >> a;
        if (b == n - 1)
        {
            ma = a;
            mi = a;
        }
        else
        {
            if (a > ma)
                ma = a;
            else if (a < mi)
                mi = a;
        }
    }
    cout << ma - mi;

    return 0;
}
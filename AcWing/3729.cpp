#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 2 * 10e5 + 10;

int a[N];

int n;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int l = N;
        for (int i = n; i >= 1; i--)
        {
            l = min(l, i - a[i] + 1); // 更新边界
            if (l <= i)
            {
                a[i] = 1; // i 在边界内，就更新元素
            }

            for (int i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
        return 0;
    }
}
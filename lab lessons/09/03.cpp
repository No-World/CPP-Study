#include <iostream>
using namespace std;
int main()
{
    int a[10][10], i, j, sum = 0;
    int max, x, y;
    int min, m, n;
    cout << "原数组a[5][5]:" << '\n';
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (!i && !j)
            {
                max = a[0][0], x = 0, y = 0;
                min = a[0][0], m = 0, n = 0;
            }
            if (i == j || i == 5 - j - 1)
            {
                sum += a[i][j];
            }
            if (max <= a[i][j])
            {
                max = a[i][j];
                x = i;
                y = j;
            }
            else
            {
                min = a[i][j];
                m = i;
                n = j;
            }
        }
    cout << "数组的最大值=" << max << " 行=" << x << " 列=" << y << '\n';
    cout << "数组的最小值=" << min << " 行=" << m << " 列=" << n << '\n';
    cout << "对角元素和=" << sum;
    return 0;
}
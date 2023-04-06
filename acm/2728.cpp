#include <iostream>
using namespace std;

int main()
{
    int y1, y2, ans = 0;
    cin >> y1 >> y2;
    for (int y = y1 / 10000; y <= y2 / 10000; y++)   //枚举所有年份
    {                                                                        
        int m = y % 10 * 10 + y / 10 % 10, d = y / 100 % 10 * 10 + y / 1000; //从年份求出月份日期
        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31 && 10000 * y + 100 * m + d <= y2)
            ans++;
        else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30 && 10000 * y + 100 * m + d <= y2)
            ans++;
        else if (m == 2)
        {
            if ((y % 400 == 0 || y % 100 != 0 && y % 4 == 0) && d <= 29 && 10000 * y + 100 * m + d <= y2)
                ans++;
            else if (d <= 28 && 10000 * y + 100 * m + d <= y2)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
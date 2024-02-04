#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        // if (i % 2 == 1)
        // {
        //     cout << i << ' ';
        // }
        // continue : 跳过自身以下的当前循环内容，直接进行到下一次的循环
        // 当i为偶数时，跳过当前循环剩余操作
        if (i % 2 == 0)
        {
            continue;
        }
        // 输出剩下的奇数
        cout << i << ' ';
    }

    return 0;
}
#include <iostream>

using namespace std;

// 判断一个整数是否能被3整除，且至少有一位数字为5
bool check(int n)
{
    // 判断n能否被3整除
    if (n % 3 != 0)
        return false;

    // 判断是否至少有一位数字为5
    while (n != 0)
    {
        // 如果n的最后一位是5，则返回true
        if (n % 10 == 5)
            return true;

        // 否则，去掉n的最后一位
        n /= 10;
    }

    // 没有任何一位是5，则返回false
    return false;
}

int main()
{
    // 枚举1~599之间的整数
    for (int i = 1; i <= 599; i++)
    {
        // 如果i满足条件，则输出
        if (check(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

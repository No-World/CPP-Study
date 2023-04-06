#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "input n=";
    // 读入n
    cin >> n;

    // 循环打印每一行
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        // 打印“*”
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // 换行
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << ' ';
        }
        
        // 打印“*”
        for (int j = 2 * (n - i) - 1; j > 0; j--)
        {
            cout << "*";
        }

        // 换行
        cout << endl;
    }
    return 0;
}
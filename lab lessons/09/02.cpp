#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3];
    cout << "输入A[3][3]的各个元素：" << '\n';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
            
    cout << "输入B[3][3]的各个元素：" << '\n';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];
    cout << "输出数组C[3][3]的各个元素：" << '\n';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
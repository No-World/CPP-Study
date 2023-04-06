#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j, a[8][8];
    for (i = 0; i < 8; i++)
    {
        a[i][i] = 1;
        a[i][0] = 1;
    }
    for (i = 1; i < 8; i++)
    {
        for (j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << setiosflags(ios::left) << setw(6) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
int a[5][5];

bool Swap(int n, int m)
{
    if (n >= 0 && n < 5 && m >= 0 && m < 5)
    {
        for (int i = 0; i < 5; i++)
            swap(a[i][n], a[i][m]);
        return 1;
    }
    else
        return 0;
}

int main()
{
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[j][i];
    int n, m;
    cin >> n >> m;
    if (Swap(n, m))
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
                cout << setw(4) << a[j][i];
            cout << endl;
        }
        cout << endl;
    }
    else
        cout << "error" << endl;

    return 0;
}
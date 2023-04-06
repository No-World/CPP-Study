#include <iostream>
using namespace std;
int main()
{
    int x, y;
    string a;
    bool b;
    cin >> y >> x >> a >> b;
    for (int i = 1; i <= x; i++)
        cout << a;
    cout << '\n';
    for (int i = 1; i <= y - 2; i++)
    {
        if (!b)
        {
            cout << a;
            for (int j = 1; j <= x - 2; j++)
                cout << ' ';
            cout << a << '\n';
        }
        else
        {
            for (int j = 1; j <= x; j++)
                cout << a;
            cout << '\n';
        }
    }
    for (int i = 1; i <= x; i++)
        cout << a;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a;
    char b;
    cin >> a >> b;
    if (b == 'y')
    {
        for (int i = 1 ; i <= a; i++)
        {
            for (int j = 1 ; j <= a - i ; j ++)
                cout << ' ';
            for (int j = 1 ; j <= 2 * i - 1 ; j ++)
                cout << '*';
            cout << '\n';
        }
        for (int i = a - 1 ; i > 0 ; i --)
        {
            for (int j = 1 ; j <= a - i ; j ++)
                cout << ' ';
            for (int j = 1 ; j <= 2 * i - 1 ; j ++)
                cout << '*';
            cout << '\n';
        }
    }
    if (b == 'n')
    {
        for (int i = 1 ; i <= a; i ++)
        {
            for ( int j = 1 ; j <= a - i ; j ++)
                cout << ' ';
            if (i == 2)
                cout << '*';
            else if (i > 2 && i <= a)
                cout << '*';
                for (int j = 1; j <= ( i - 2 )* 2 + 1; j ++)
                    cout << " ";
                cout << '*';
            cout << '\n';
        }
        for (int i = a - 1 ; i > 0 ; i --)
        {
            for ( int j = 1 ; j <= a - i ; j ++)
                cout << ' ';
            if (i == 2)
                cout << '*';
            else if (i > 2 && i <= a)
                cout << '*';
                for (int j = 1; j <= ( i - 2 )* 2 + 1; j ++)
                    cout << " ";
                cout << '*';
            cout << '\n';
        }
    }
    return 0;
}
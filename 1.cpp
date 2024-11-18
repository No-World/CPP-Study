#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 1;
    cin >> a;
    if (a == 1)
    {
        cout << "No" << endl;
    }
    else
    {
        for (b = 2; ++b;)
        {
            c = a % b;
            if (c == 0)
            {
                break;
            }
        }
        if (c == 0 && a != 2 && a != 3 && a != 5 && a != 7)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}

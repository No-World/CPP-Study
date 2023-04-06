#include <iostream>
using namespace std;

int main()
{
    double t;
    long long x;
    string yd;
    int n;
    string Yes = "Yes", No = "No";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t >> x >> yd;
        if (t >= 0 && t <= 24 && x > 0 && x < 1000000 && (yd == Yes || yd == No))
        {
            if (t >= 7 && t <= 8 && x >= 1500 && yd == Yes)
            {
                cout << "Yes\n";
            }
            else
                cout << "No\n";
        }
    }
    system("pause");
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double m, p, n = 0, k = 1, ap;
    long i = 1;
    cin >> m >> p;

    while (1)
    {
        if (i == 1)
            ap = p * 0.8;
        else if (i == 2)
            ap = p * 0.6;
        else if (i == 3)
            ap = p * 0.55;
        else
            ap = p * 0.5;
        n += ap;
        if (n > m)
        {
            if (n - ap <= 50 && k == 1)
            {
                m = m - 10;
                i = 1;
                k = 0;
                n = 0;
            }
            else
            {
                i--;
                break;
            }
        }
        else if (n < m)
            i++;
        else
            break;
    }
    cout << i << endl;
    return 0;
}

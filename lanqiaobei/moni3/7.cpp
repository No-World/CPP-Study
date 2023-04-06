#include <iostream>
#include <cstring>
#include <algorithm>

#define x first
#define y second

using namespace std;

typedef pair<int, int> PII;

const int N = 110;

int w, h;
int n, R;
PII cs[N];

int main()
{
    cin >> w >> h >> n >> R;

    for (int i = 0; i < n; i++)
        cin >> cs[i].x >> cs[i].y;

    int res = 0;
    for (int x = 0; x <= w; x++)
        for (int y = 0; y <= h; y++)
        {
            bool flag = false;
            for (int k = 0; k < n; k++)
            {
                if ((x - cs[k].x) * (x - cs[k].x) + (y - cs[k].y) * (y - cs[k].y) <= R * R)
                {
                    flag = true;
                    break;
                }
            }

            if (flag)
            {
                res++;
            }
        }

    cout << res << "\n";
    return 0;
}
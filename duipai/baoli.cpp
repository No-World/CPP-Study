#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
vector<long long> r;
vector<long long> b;
int n;
long long a[200005];
char c[200005];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
        if (c[i] == 'R')
            r.push_back(a[i]);
        else
            b.push_back(a[i]);
    }
    if (r.size() == 0 || b.size() == 0)
    {
        cout << 0;
        return 0;
    }
    sort(b.begin(), b.end()); // x小到大
    long long ans = 0;
    for (int i = 0; i < r.size(); i++)
    {
        // 将r数据中的数据一一在b数组中查找相同值得元素的总个数
        int x = 0, y = b.size() - 1;
        while (x < y)
        {
            int mid = (x + y + 1) / 2;
            if (b[mid] < r[i])
                x = mid + 1;
            else if (b[mid] > r[i])
                y = mid - 1;
            else if (b[mid] == r[i])
            {
                if (b[mid - 1] < r[i])
                    x = mid;
                else
                    y = mid - 1;
            }
        }
        if (b[x] == r[i])
        {
            // 已经在b容器中找到r[i],下一步就是找第一个比r[i]大的数
            int L = x, R = b.size() - 1;
            while (L < R)
            {
                int mid = (L + R + 1) / 2;
                if (b[mid] <= r[i])
                    L = mid;
                else
                    R = mid - 1;
            }
            ans += L - x + 1;
        }
    }

    cout << ans;
    return 0;
}
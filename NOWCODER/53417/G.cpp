#include <iostream>
#include <vector>
using namespace std;

struct Point
{
    int x, y;
};

// 叉积计算
int crossProduct(Point a, Point b, Point c)
{
    int x1 = a.x - b.x, y1 = a.y - b.y;
    int x2 = c.x - b.x, y2 = c.y - b.y;
    return x1 * y2 - x2 * y1;
}

int main()
{
    int n;
    cin >> n;
    vector<Point> points(n);
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int cnt = 0;
            for (int k = 0; k < n; k++)
            {
                if (k == i || k == j)
                {
                    continue;
                }
                if (crossProduct(points[i], points[j], points[k]) == 0)
                {
                    cnt++;
                }
            }
            count += cnt * (cnt - 1) / 2; // 统计凸四边形数量
        }
    }
    cout << count << endl;
    return 0;
}

#include <cstdio>
using namespace std;
int main()
{
    int ax1, ay1, ax2, ay2, x1, y1, x2, y2, bx1, by1, bx2, by2;
    bool b = true;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    scanf("%d%d%d%d", &ax1, &ay1, &ax2, &ay2);
    scanf("%d%d%d%d", &bx1, &by1, &bx2, &by2);
    if ((ax1 <= x1 && ax2 >= x2 && ay1 <= y1 && ay2 >= y2) || (bx1 <= x1 && bx2 >= x2 && by1 <= y1 && by2 >= y2))
    {
        b = false;
    }
    else if ((ax1 <= x1 && ax2 >= x2 && bx1 <= x1 && bx2 >= x2) && ((ay1 <= y1 && by2 >= y2 && by1 <= ay2) || (by1 <= y1 && ay2 >= y2 && ay1 <= by2)))
    {
        b = false;
    }
    else if ((ay1 <= y1 && ay2 >= y2 && by1 <= y1 && by2 >= y2) && ((ax1 <= x1 && bx2 >= x2 && bx1 <= ax2) || (bx1 <= x1 && ax2 >= x2 && ax1 <= bx2)))
    {
        b = false;
    }
    if (!b)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}
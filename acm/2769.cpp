#include <cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int id1, hp1, hj1, id2, hp2, hj2;
        bool flag = false;
        scanf("%d%d%d\n%d%d%d", &id1, &hp1, &hj1, &id2, &hp2, &hj2);
        for (int i = 1; hp1 >= 0 && hp2 >= 0; i++)
        {
            hp1 -= i;
            if (id1 == 1)
            {
                hp2--;
            }
            else if (id1 == 2)
            {
                hp2 -= 2;
            }
            else if (id1 == 3)
            {
                hp1 += 2;
            }
            else
            {
                hp1 += 2;
            }
            if (hp1 <= 0)
            {
                flag = false;
                break;
            }
            else if (hp2 <= 0)
            {
                flag = true;
                break;
            }

            hp2 -= i;
            if (id2 == 1)
            {
                hp1--;
            }
            else if (id2 == 2)
            {
                hp1 -= 2;
            }
            else if (id2 == 3)
            {
                hp2 += 2;
            }
            else
            {
                hp2 += 2;
            }
            if (hp1 <= 0)
            {
                flag = false;
                break;
            }
            else if (hp2 <= 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
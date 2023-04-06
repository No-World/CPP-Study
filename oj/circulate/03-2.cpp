#include <cstdio>
int main()
{
    int y,m,d,n;
    scanf("%d %d %d %d", &y, &m, &d , &n);
    for (int i = 0; i < n; i++)
    {
        if (m == 2)
        {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            {
                if (d == 29)
                {
                    m ++;
                    d = 1;
                }
                else 
                    d ++;
            }
            else
            {
                if (d == 28)
                {
                    m ++;
                    d = 1;
                }
                else 
                    d ++;
            }
        }
        
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d == 30)
            {
                m ++;
                d = 1;
            }
            else 
                d ++;
        }
        
        else if (m == 12)
        {
            if (d == 31)
            {
                y ++;
                m = 1;
                d = 1;
            }
            else 
                d++;
        }
        
        else
        {
            if (d == 31)
            {
                m ++;
                d = 1;
            }
            else
                d ++;
        }
        
    }
    printf("%d-%02d-%02d", y, m, d);
	return 0;
}

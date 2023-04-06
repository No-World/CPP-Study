#include <cstdio>
int main()
{
    int y = 2000,m = 1,d = 1,n;
    scanf("%d", &n);
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
    printf("%d-%02d-%02d ", y, m, d);
    switch (n % 7)
    {
    case 0:
        printf("Saturday");
        break;
    
    case 1:
        printf("Sunday");
        break;
        
    case 2:
        printf("Monday");
        break;
        
    case 3:
        printf("Tuesday");
        break;
        
    case 4:
        printf("Wednesday");
        break;
        
    case 5:
        printf("Thursday");
        break;
        
    case 6:
        printf("Friday");
        break;
        
    default:
        break;
    }
	return 0;
}
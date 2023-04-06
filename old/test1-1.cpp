//一道简单的数学题

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n , x = 0 , y = 0 ;
    double c;
    scanf("%d",&n);
	for (int x = 1 ; x < 10000 ; x++)
    {
		for (int y = 1 ; y < 10000 ; y++)
		{
			c = 1.0 / x + 1.0 / y - 2.0 / n;
			printf("x:%d  y:%d\n",x,y);
			if (c == 0)
			{
				printf("x=%d\ny=%d\n",x,y);
                system("pause");
                return 0;
			}
		}
        y = 0;
	}
}
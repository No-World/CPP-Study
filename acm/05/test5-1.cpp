#include <cstdio>
#include <iostream> 
using namespace std;
int x[1001][1001], y[1001][1001]; 

int main()
{
	int n, m, p; 
	scanf("%d %d %d", &n, &m, &p);
	for (int i = 1; i <= n; i++)
	    for (int j = 1; j <= m; j++)
		    scanf("%d", &x[i][j]);
	for (int i = 1; i <= n; i++)
	    for (int j = 1; j <= m; j++)
		    y[i][j] = x[i][j] + y[i - 1][j] + y[i][j - 1] - y[i - 1][j - 1];
	while (p--) 
	    {
	    	int x1, y1, x2, y2;
	    	scanf("%d %d %d %d", &x1, &y1, &x2, &y2); 
			if (x1 > x2) 
		    swap(x1, x2); 
			if (y1 > y2)
			swap(y1, y2); 
			printf("%d\n", y[x2][y2] + y[x1-1][y1-1] - y[x1-1][y2] - y[x2][y1-1]); 
		} 
	return 0; 
} 

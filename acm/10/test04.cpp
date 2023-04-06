#include <cstdio>
using namespace std;

int main()
{
	int i = 1, n;
	double sum = i;
	scanf("%d", &n); 
	while (i++)
	{
	    sum += 1.0 / i;
	    if ( sum >= n)
			break; 
	} 
	printf("%d", i); 
	
	return 0; 
} 

#include <cstdio>
using namespace std;

int a[4]; 

int main()
{
	int n, ai;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &ai);
		if (ai == 5)
			a[1]++;
		else if (ai == 10)
			a[2]++; 
	} 
	if (a[1] % 2 != 0 || (a[2] % 2 != 0 && a[1] == 0)) 
	    printf("Cannot");
	else
	    printf("Can"); 
	return 0; 
} 

#include <algorithm>
#include <cstdio>
using namespace std;
long long a[10001],b[10001];

int main()
{
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { 
	    scanf("%d", &a[i]);
        b[i] = a[i]; 
    } 
    sort(a + 1, a + n + 1); 
    for(int i = 1; i <= n; i++)
        if (a[i] != b[i])
            c++;
	printf("%d",c); 
		 
    return 0;
}

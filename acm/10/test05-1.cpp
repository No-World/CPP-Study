#include <cstdio>
using namespace std;

const int N = 1e5 + 10; 
int ai[N], vis[N]; 

int main()
{
	int n, f = 1; 
	long long k, p;
	scanf("%d%lld", &n, &k);
	k = p; 
	for (int i = 1; i <= n; i++) 
		scanf("%d", &ai[i]); 
	for(;;) 
	{
		if(vis[f] == 1 && p >= (k - p)) 
		{
		    p = p % (k - p); 
		} 
		if(p == 0)
		{ 
			printf("%d", f);
			break;
		} 
		vis[f] = 1;
		f = ai[f]; 
		p--; 
	} 
	return 0; 
}  //不一定从1开始循环 

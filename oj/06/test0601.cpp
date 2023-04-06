#include <cstdio>
using namespace std;

int n;

int main()
{
	int a, N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &n);
		if (n == 0)
			a = 0;
		else
		{
			a = 1;
			while(n > 1)
			{
//				printf("%d %d\n", n, n % 2);
				if (n % 2 == 1)
				{
					a++;
					n = (n - 1) / 2;
				}
				else
					n /= 2;
			}
		}
		printf("%d\n", a);
	}
	return 0;
}
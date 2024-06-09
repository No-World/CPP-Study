#include <stdio.h>
#include <stdbool.h>

const int N = 1e5 + 10;

_Bool is_array_down(int a[], int size)
{
	for (int i = 1; i < size; ++i)
	{
		if (a[i] >= a[i - 1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int a[N], size = 0;
	while (scanf("%d", &a[size++]) != EOF)
	{
	}
	if (is_array_down(a, size))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}

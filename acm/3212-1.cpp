#include <iostream> 
#include <cstring>
#include <stack> 
using namespace std;

const int N = 1e5 + 10;
char a[N]; 

int main()
{
	scanf("%s", a + 1); 
	int n = strlen(a + 1), ans = 0; 
	stack<char> stk; 
	for (int i = 0; i <= n; i++) 
	{
		if (a[i] == '0')
		{
			if (stk.empty() || stk.top() != '1') 
				stk.push(a[i]);
			else
			{
				ans += 2;
				stk.pop(); 
			} 
		} 
		else
		{
			if (stk.empty() || stk.top() != '0') 
				stk.push(a[i]);
			else
			{
				ans += 2;
				stk.pop(); 
			} 
		} 
	} 
	printf("%d", ans); 
	
	return 0; 
} 

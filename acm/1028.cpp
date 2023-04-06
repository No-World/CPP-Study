#include <cstdio>
#include <stack> 
#include <cstring> 
using namespace std;

const int N = 1e4 + 10; 
char a[N]; 

int main()
{ 
	scanf("%s", a + 1); 
	int n = strlen(a + 1); 
	stack<char> stk; 
	int ans = 1;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == ')')
		{
			if(stk.empty() || stk.top() != '(')
			{
				ans = 0;
				break; 
			} 
			stk.pop(); 
		} 
		else if (a[i] == ']')
		{
			if(stk.empty() || stk.top() != '[')
			{
				ans = 0;
				break; 
			} 
			stk.pop(); 
		} 
		else if (a[i] == '}')
		{
			if(stk.empty() || stk.top() != '{')
			{
				ans = 0;
				break; 
			} 
			stk.pop(); 
		} 
		else stk.push(a[i]); 
	} 
	if (ans && stk.empty())
	    printf("Yes");
	else
		printf("No"); 
	return 0; 
} 

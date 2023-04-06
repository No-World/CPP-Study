#include <iostream>
using namespace std; 

int main()
{
	string s, x = "1"; 
	long long k; 
	cin >> s;
	cin >> k; 
	for (int i = 0;i < k; i++)
	{
		if (s[i] != '1') 
		{
			x = s[i]; 
		    break; 
		} 
	} 
	cout << x; 
	return 0; 
} 

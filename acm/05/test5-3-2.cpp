#include <iostream>
using namespace std;

int main() 
{
    string a;
    int b = 0; 
    cin >> a; 
	for(int i = 0; i < 8; i++) 
	{
		if(a[i] == '1')
		    b++; 
	} 
	cout << b; 
	return 0; 
} 

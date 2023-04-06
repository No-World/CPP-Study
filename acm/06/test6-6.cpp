#include <iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	bool b = false; 
	for (int i=0; i < a.size(); i++)
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		    b = true; 
	cout << (b ? "YES":"NO"); 
}

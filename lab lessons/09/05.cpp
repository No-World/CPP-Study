#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	char n[100];
	cin >> n;
	sort(n, n + strlen(n), greater<char>());
	for (int i = 0; i < strlen(n); i++)
	{
		cout << n[i];
	}

	return 0;
}
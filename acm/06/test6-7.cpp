#include <iostream>
using namespace std;

const int MAX = 100010;
int x[MAX];

int main()
{
	int n, q;
	cin >> n >> q; 
	string S;
	cin >> S;
	S = ' ' + S; 
	for (int i = 1; i <= n; i++)
	    x[i] = x[i - 1] + (S[i] == 'A' && S[i + 1] == 'C'); 
	while(q--)
	{
		int l, r; 
		cin >> l >> r;
		if (l == r)
		cout << "0\n"; 
		else
		cout << x[r] - x[l - 1] - (S[r] == 'A' && S[r + 1] == 'C') << '\n'; 
	} 
	return 0; 
}
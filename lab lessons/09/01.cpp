#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i, j;
	int a[3][3];
	cout << "输入a[3][3]:" << '\n';
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			cin >> a[i][j];
	cout << "输出数组a[3][3]的各个元素:" << '\n';
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
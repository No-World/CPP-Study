#include <iostream>
using namespace std;
void show(int a)
{
	if (90 <= a && a <= 100)
		cout << "A";
	else if (80 <= a && a <= 89)
		cout << "B";
	else if (70 <= a && a <= 79)
		cout << "C";
	else if (60 <= a && a <= 69)
		cout << "D";
	else
		cout << "E";
}
int main()
{
	int a;
	cout << "输入分数：";
	cin >> a;
	cout << "得";
	show(a);
	return 0;
}
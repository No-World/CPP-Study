#include<iostream>
using namespace std;
//书上思路
int s,e,p; //s：线段起点，e：线段终点,p：点的位置
int n,m; //n：线段条数，m：点的个数
int v[50010]; //每个单元位置上的点在所有线段中出现次数
int main()
{
	cin >> n; //输入线段条数
	for(int i=0;i<n;i++)
	{
		cin >> s >> e; //输入线段的起点和终点
		for(int j=s;j<=e;j++)
		{
			v[j]++; //将该条线段覆盖到的点都加1
		}
	}
	cin >> m; //输入点的个数
	for(int k=0;k<m;k++)
	{
		cin >> p; //输入点的位置
		cout << v[p] << endl; //将该位置的点出现次数输出
	}
	system("pause");
	return 0;
}
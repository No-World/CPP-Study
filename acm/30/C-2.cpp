#include<iostream>

using namespace std;
int fa[1001000];//fa数组表示每个点的father是谁，也相当于直系根节点是谁
int find(int x)
{
	if (fa[x] == x)//如果找到了集合的代表元素，那么我就返回他
	{
		return x;
	}
	return fa[x] = find(fa[x]);//路径压缩，把集合变成菊花图
}

void merge(int x, int y)
{
	x = find(x);//x变成x所在集合的代表元素
	y = find(y);//y变成y所在集合的代表元素
	fa[x] = y;//建立连边
}

int main()//如果fa[x]=x,说明他是集合的代表元素
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= 2 * n; i++)//注意是2*n因为还有一个拓展域
	{
		fa[i] = i;//一开始每个元素都自成一个集合
	}
	for (int i = 1; i <= m; i++)
	{
		int a, b;
		string c;
		cin >> a >> b >> c;
		if (c == "T")//a和b应在在一个集合里a的反和b的反应该在一个集合
		{
			if (find(a) == find(b + n))//如果前面已经出现了a和b的反在一起的情况那么说明这条信息有误
			{
				cout << i << "\n";
			}
			else
			{
				merge(a, b);//这条信息无误，我就合并a和b，a的反和b的反
				merge(a + n, b + n);
			}
		}
		else//这个是a和b的反在一个集合并且a的反和b应该在一个集合
		{
			if (find(a) == find(b))//如果前面已经出现了a和b在一个集合的话我们信息就是错误的
			{
				cout << i << "\n";
			}
			else
			{
				merge(a, b + n);//这条信息如果正确的话那么我们合并a和b的反，a的反和b
				merge(a + n, b);
			}
		}
	}
}

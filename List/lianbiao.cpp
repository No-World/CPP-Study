#include <iostream>
#include <graphics.h>
#include "List.h"
#include <cstdlib>
#include <Windows.h>
#include <cstdio>
#include <ctime>
using namespace std;

void show(Node *pnode)
{
	for (int i = 0; i < 20; i++)
	{
		if (pnode->data.ch[i] != '\0')
		{
			settextcolor(pnode->data.color);
			outtextxy(pnode->data.a, pnode->data.b - i * 18, pnode->data.ch[i]);
		}
		else
		{
			break;
		}
	}
}
void move(Node *pnode)
{
	pnode->data.b++;
}
int main()
{
	srand(time(NULL));
	initgraph(1200, 800);
	List *Plist;
	InitList(&Plist);
	Node *pnode;
	while (1)
	{
		pnode = (Node *)malloc(sizeof(Node));
		pnode->data.a = rand() % 1200;
		pnode->data.b = 0;
		pnode->data.color = RGB(rand() % 255, rand() % 255, rand() % 255);
		int n = rand() % 10 + 5;
		for (int i = 0; i < n; i++)
		{
			pnode->data.ch[i] = rand() % 26 + 65;
		}
		pnode->data.ch[n] = '\0';
		pnode->pnext = NULL;
		insertList(Plist, pnode);
		TraveList(Plist, show);
		TraveList(Plist, move);
		Sleep(0.05);
	}
	getchar();
	return 0;
}
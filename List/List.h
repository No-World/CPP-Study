#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE
#include <cstdlib>
struct Data
{
	int a;
	int b;
	char ch[20];
	int color;
};
struct Node
{
	Data data;
	struct Node *pnext;
};
struct List
{
	Node *pfront;
	Node *prear;
	int count = 0;
};
void insertList(List *pList, Node *pnode);
int isempty(List *pList);
void TraveList(List *pList, void (*traver)(Node *pnode));
int InitList(List **ppList);
#endif
#include "List.h"
// 初始化链表
int InitList(List **ppList)
{
	*ppList = (List *)malloc(sizeof(List));
	if (*ppList == NULL)
		return 0;
	else
	{
		(*ppList)->pfront = NULL;
		(*ppList)->prear = NULL;
		(*ppList)->count = 0;
	}
	return 1;
}
// 遍历链表
void TraveList(List *pList, void (*traver)(Node *pnode))
{
	Node *ptemp = pList->pfront;
	int Listsize = pList->count;
	while (Listsize)
	{
		traver(ptemp);
		ptemp = ptemp->pnext;
		Listsize--;
	}
}
// analyse 链表是否为空
int isempty(List *pList)
{
	if (pList->count == 0)
		return 1;
	else
		return 0;
}
// insert 插入链表
void insertList(List *pList, Node *pnode)
{
	// 尾插法 在尾部插入链表
	if (isempty(pList))
	{
		pList->pfront = pnode;
	}
	else
	{
		pList->prear->pnext = pnode;
	}
	pList->prear = pnode;
	pList->count++;
}

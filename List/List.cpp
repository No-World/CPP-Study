#include "List.h"
// ��ʼ������
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
// ��������
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
// analyse �����Ƿ�Ϊ��
int isempty(List *pList)
{
	if (pList->count == 0)
		return 1;
	else
		return 0;
}
// insert ��������
void insertList(List *pList, Node *pnode)
{
	// β�巨 ��β����������
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

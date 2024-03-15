#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef int ElemType;
const int MaxSize = 20;
typedef struct
{
    ElemType data[MaxSize];
    int length;
} SqList; // SqList sl;  sl.length sl.data[i-1]
void initList(SqList &L);
void clearList(SqList &L);
void destroyList(SqList &L);
bool emptyList(SqList L);
bool fullList(SqList L);
int listLength(SqList L);
bool getData(SqList L, int pos, ElemType &e);
bool setData(SqList &L, int pos, ElemType e);
int locate(SqList L, ElemType e);
bool insertList(SqList &L, int pos, ElemType e);
bool deleteList(SqList &L, int pos, ElemType &e);
void input(SqList &L);
void display(SqList &L);
void welcome();
void delx(SqList &L, ElemType x);
void delsame(SqList &L);
void delsame2(SqList &L); // 对有序顺序表L去重
void merge(SqList L1, SqList L2, SqList &L);
void partition(SqList &L);
void move1(SqList &L);
void move2(SqList &L);
int main(void)
{
    SqList sl;
    for (int i = 0; i < 20; i += 2)
    {
        insertList(sl, sl.length + 1, i);
    }
    for (int i = 1; i < 20; i += 2)
    {
        insertList(sl, sl.length + 1, i);
    }
    display(sl);
    move2(sl);
    display(sl);
    return 0;
}

void initList(SqList &L)
{
    L.length = 0;
}
void clearList(SqList &L)
{
    L.length = 0;
}
void destroyList(SqList &L)
{
}
bool emptyList(SqList L)
{
    return L.length == 0;
}
bool fullList(SqList L)
{
    return L.length == MaxSize;
}
int listLength(SqList L)
{
    return L.length;
}
bool getData(SqList L, int pos, ElemType &e)
{
    if (pos < 1 || pos > L.length)
        return false;
    e = L.data[pos - 1];
    return true;
}
bool setData(SqList &L, int pos, ElemType e)
{
    if (pos < 1 || pos > L.length)
        return false;
    L.data[pos - 1] = e;
    return true;
}
int locate(SqList L, ElemType e)
{
    for (int i = 0; i < L.length; i++)
        if (L.data[i] == e)
            return i + 1;
    return 0;
}
bool insertList(SqList &L, int pos, ElemType e)
{
    if (pos < 1 || pos > L.length + 1)
        return false;
    for (int i = L.length - 1; i >= pos - 1; i--)
        L.data[i + 1] = L.data[i];
    L.data[pos - 1] = e;
    L.length++;
    return true;
}
bool deleteList(SqList &L, int pos, ElemType &e)
{
    if (pos < 1 || pos > L.length)
        return false;
    e = L.data[pos - 1];
    for (int i = pos - 1; i < L.length - 1; i++)
        L.data[i] = L.data[i + 1];
    L.length--;
    return true;
}
void input(SqList &L)
{
    ElemType x;
    cout << "input sqlist, -1 will be end.\n";
    while (1)
    {
        cin >> x;
        if (x == -1)
            break;
        L.data[L.length++] = x;
    }
}
void display(SqList &L)
{
    for (int i = 0; i < L.length; i++)
        cout << L.data[i] << " ";
    cout << endl;
}
void welcome()
{
    cout << "==========顺序表基本操作==========\n";
    cout << "1.初始化               2.清空\n";
    cout << "3.判空                 4.判满\n";
    cout << "5.输入                 6.输出\n";
    cout << "7.表长                 8.取值\n";
    cout << "9.查找                 10.按位赋值\n";
    cout << "11.插入                12.删除\n";
    cout << "13.删除x               14.去重\n";
    cout << "15.划分                16.奇前偶后1\n";
    cout << "17.奇前偶后2           18.归并\n";
    cout << "=================================\n";
    cout << "输入选择操作（0~12）:";
}
void delx(SqList &L, ElemType x)
{
    int n = 0;
    for (int i = 0; i < L.length; i++)
        if (L.data[i] != x)
            L.data[n++] = L.data[i];
    L.length = n;
}
void delsame(SqList &L)
{
    int n = 0;
    for (int i = 0; i < L.length; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (L.data[j] == L.data[i])
                break;
        }
        if (j == n)
            L.data[n++] = L.data[i];
    }
    L.length = n;
}
void delsame2(SqList &L)
{
    int last = -1;
    for (int i = 0; i < L.length; i++)
    {
        if (i == 0)
            L.data[++last] = L.data[i];
        else
        {
            if (L.data[i] != L.data[last])
                L.data[++last] = L.data[i];
        }
    }
    L.length = last + 1;
}
void merge(SqList L1, SqList L2, SqList &L)
{
    int i, j, k;
    i = j = k = 0;
    while (i < L1.length && j < L2.length)
    {
        if (L1.data[i] <= L2.data[j])
            L.data[k++] = L1.data[i++];
        else
            L.data[k++] = L2.data[j++];
    }
    while (i < L1.length)
        L.data[k++] = L1.data[i++];
    while (j < L2.length)
        L.data[k++] = L2.data[j++];
    L.length = k;
}

void partition(SqList &L)
{
    ElemType pivot = L.data[0];
    int i = 0, j = L.length - 1;
    while (i < j)
    {
        while (i < j && L.data[j] > pivot)
            j--;
        while (i < j && L.data[i] <= pivot)
            i++;
        if (i < j)
        {
            ElemType tmp = L.data[i];
            L.data[i] = L.data[j];
            L.data[j] = tmp;
        }
    }
    ElemType tmp = L.data[0];
    L.data[0] = L.data[i];
    L.data[i] = tmp;
}

void move1(SqList &L)
{
    int i = 0, j = L.length - 1;
    while (i < j)
    {
        while (i < j && L.data[i] % 2 != 0)
            i++;
        while (i < j && L.data[j] % 2 == 0)
            j--;
        if (i < j)
        {
            ElemType tmp = L.data[i];
            L.data[i] = L.data[j];
            L.data[j] = tmp;
        }
    }
}
void move2(SqList &L)
{
    int i = -1;
    for (int j = 0; j < L.length; j++)
    {
        if (L.data[j] % 2 == 0)
        {
            i++;
            if (i != j)
            {
                ElemType tmp = L.data[i];
                L.data[i] = L.data[j];
                L.data[j] = tmp;
            }
        }
    }
}

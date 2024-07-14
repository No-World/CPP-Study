#include <iostream>
#define MaxSize 1010
typedef int ElemType;
struct Sqlist
{
    ElemType data[MaxSize];
    int size;
};
int BinarySearch(Sqlist *List, ElemType x)
{
    int l = 0, r = List->size - 1;
    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (List->data[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid;
        }
    }
    if (List->data[r] == x)
        return r;
    return -1;
}

int main()
{
    Sqlist a;
    a.size = 0;
    for (int i = 0; i <= 9999; ++i)
    {
        a.data[i] = i;
        a.size++;
    }
    for (int i = 0; i <= 9999; ++i)
    {
        if (i != BinarySearch(&a, i))
            std::cout << i << ":no" << '\n';
    }
    return 0;
}
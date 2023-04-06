#include <iostream>
#include <iomanip>
using namespace std;
void st(int a[], int n)
{
    int i, temp;
    for (i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void bg(int *p, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (*(p + i) < *(p + j))
                swap(*(p + i), *(p + j));
}

int main()
{
    int a[10];
    cout << "请输入10个整数:" << endl;
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    st(a, 10);
    cout << "第一种降序排序方式：";
    for (int i = 0; i < 10; i++)
        cout << setw(6) << a[i];
    cout << endl;

    bg(a, 10);
    cout << "第二种降序排序方式：";
    for (int i = 0; i < 10; i++)
        cout << setw(6) << a[i];
    cout << endl;

    int *p = a;
    st(p, 10);
    cout << "第三种降序排序方式：";
    for (int i = 0; i < 10; i++)
        cout << setw(6) << a[i];
    cout << endl;

    int *t = a;
    bg(t, 10);
    cout << "第四种降序排序方式：";
    for (int i = 0; i < 10; i++)
        cout << setw(6) << a[i];
    return 0;
}
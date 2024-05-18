#include <iostream>
using namespace std;
#define ElemType int
#define MaxSize 200
typedef struct
{
    ElemType data[MaxSize];
    int front; // 队头指针
    int count; // 队列中元素个数
} QuType;
// 初始化队列
void InitQueue(QuType *&qu);
// 销毁队列
void DestroyQueue(QuType *&qu);
// 判断队列是否为空
bool QueueEmpty(QuType *qu);
// 入队
bool EnQueue(QuType *&qu, ElemType x);
// 出队
bool DeQueue(QuType *&qu, ElemType &x);
// 取栈顶元素
bool GetFront(QuType *qu, ElemType &e);
int main(int argc, char const *argv[])
{
    QuType *qee1, *qee2;
    InitQueue(qee1);
    InitQueue(qee2);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ElemType x;
        cin >> x;
        if (x % 2)
        {
            EnQueue(qee1, x);
        }
        else
        {
            EnQueue(qee2, x);
        }
    }
    while (!QueueEmpty(qee1) || !QueueEmpty(qee2))
    {
        int x = 0;
        ElemType e;
        while (x++ < 2 && !QueueEmpty(qee1))
        {
            DeQueue(qee1, e);
            cout << e << ' ';
        }
        if (!QueueEmpty(qee2))
        {
            DeQueue(qee2, e);
            cout << e << ' ';
        }
    }
    DestroyQueue(qee1), DestroyQueue(qee2);
}
void InitQueue(QuType *&qu) // 初始化队运算算法
{
    // cout << "开始初始化环形队列\n";
    qu = new QuType;
    qu->front = 0;
    qu->count = 0;
    // cout << "初始化环形队列完成\n";
}
void DestroyQueue(QuType *&qu)
{
    delete qu;
    // cout << "队列已被释放\n";
}
bool QueueEmpty(QuType *qu)
{
    return (qu->count == 0);
}
bool EnQueue(QuType *&qu, ElemType x)
{
    int rear;                 // 临时队尾指针
    if (qu->count == MaxSize) // 队满上溢出
        return false;
    else
    {
        rear = (qu->front + qu->count) % MaxSize; // 求队尾位置
        rear = (rear + 1) % MaxSize;              // 队尾循环增1
        qu->data[rear] = x;
        qu->count++; // 元素个数增1
        // cout << "元素入队成功\n";
        return true;
    }
}
bool DeQueue(QuType *&qu, ElemType &x)
{
    if (qu->count == 0) // 队空下溢出
        return false;
    else
    {
        qu->front = (qu->front + 1) % MaxSize; // 队头循环增1
        x = qu->data[qu->front];
        qu->count--; // 元素个数减1
        // cout << "元素出队成功\n";
        return true;
    }
}
bool GetFront(QuType *qu, ElemType &e)
{
    if (qu->count == 0) // 队列为空的情况，即队空下溢出
        return false;
    e = qu->data[qu->front]; // 取队首指针元素的元素
    return true;
}
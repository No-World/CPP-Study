#include <stdio.h>

#define MAXSIZE 50

typedef int Queue;
typedef struct
{
    Queue element[MAXSIZE];
    int front;
    int rear;
} SeqQueue;

void InitQueue(SeqQueue *Q)
{
    Q->front = Q->rear = 0;
}

void EnterQueue(SeqQueue *Q, Queue x)
{
    if (Q->rear + 1 == Q->front)
    {
        printf("队列已满不能入队\n");
        return;
    }
    Q->element[Q->rear] = x;
    Q->rear = Q->rear + 1;
}

void printQ(SeqQueue Q)
{
    int i;
    i = Q.front;
    while (i != Q.rear)
    {
        if (i == MAXSIZE)
        {
            i = 0;
        }
        printf(" %d ", Q.element[i]);
        i++;
    }
    printf("\n");
}

void DeleteQueue(SeqQueue *Q, Queue *x)
{
    if (Q->front == Q->rear)
    {
        printf("队列为空不能出队\n");
        return;
    }
    *x = Q->element[Q->front];
    Q->front = Q->front + 1;
}

void GetHead(SeqQueue *Q, Queue *x)
{
    if (Q->front == Q->rear)
    {
        printf("队列为空不能取值\n");
        return;
    }
    *x = Q->element[Q->front];
}

int main()
{
    SeqQueue Q;
    Queue x, temp;
    int n, N;
    int i;
    InitQueue(&Q);
    EnterQueue(&Q, 1); // 第一行元素入队
    printf("请输入杨辉三角行数：(大于等于2)\n");
    scanf("%d", &N);
    if (N < 2)
    {
        printf("输入格式错误！");
        return 0;
    }
    for (n = 2; n <= N; n++) // 产生第n行元素并入队，同时打印第n-1行的元素
    {
        EnterQueue(&Q, 1);           // 第n行的第一个元素入队
        for (i = 1; i <= n - 2; i++) // 利用队中第n-1行元素产生第n行的中间n-2个元素并入队
        {
            DeleteQueue(&Q, &temp);
            printf("%d ", temp); // 打印出来第n-1行的元素
            GetHead(&Q, &x);
            temp = temp + x; // 利用队列中第n-1行元素产生第n行元素
            EnterQueue(&Q, temp);
        }
        DeleteQueue(&Q, &x);
        printf("%d ", x);  // 打印第n-1行的最后一个元素
        EnterQueue(&Q, 1); // 让第n行的最后一个元素入队
        printf("\n");
    }
    while (Q.front != Q.rear) // 打印最后一行元素
    {
        DeleteQueue(&Q, &x);
        printf("%d ", x);
    }
    return 0;
}
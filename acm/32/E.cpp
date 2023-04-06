#include <queue>
#include <cstdio>
#include <iostream>
using namespace std;
priority_queue<int> qee;
int main()
{
    while (1)
    {
        string s;
        cin >> s;
        if (s[1] == 'U')
        {
            int x;
            scanf("%d", &x);
            qee.push(x);
        }
        else if (s[1] == 'O')
        {
            if (qee.empty())
            {
                printf("Empty\n");
            }
            else
            {
                printf("%d\n", qee.top());
                qee.pop();
            }
        }
        
        else if (s[1] == 'N')
        {
            break;
        }
    }
    
    return 0;
}
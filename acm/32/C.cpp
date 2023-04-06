#include <queue>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    queue<int> qee;
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
                printf("%d\n", qee.front());
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
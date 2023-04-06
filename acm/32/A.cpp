#include <stack>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    stack <int>stk;
    while (1)
    {
        string s;
        cin >> s;
        if (s[1] == 'U')
        {
            int x;
            scanf("%d", &x);
            stk.push(x);
        }
        else if (s[1] == 'O')
        {
            if (stk.empty())
            {
                printf("Empty\n");
            }
            else
            {
                printf("%d\n", stk.top());
                stk.pop();
            }
        }
        
        else if (s[1] == 'N')
        {
            break;
        }
    }
    
    return 0;
}
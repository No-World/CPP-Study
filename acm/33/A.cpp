#include <set>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    set<int> st;
    string s;
    while (cin >> s)
    {
        if (s[2] == 'S')
        {
            int x;
            scanf("%d", &x);
            if (st.count(x))
            {
                printf("EXISTED\n");
            }
            else
            {
                st.insert(x);
            }
        }
        else if (s[2] == 'A')
        {
            int x;
            scanf("%d", &x);
            if (st.count(x))
            {
                st.erase(x);
            }
            else
            {
                printf("UNEXISTED\n");
            }
        }
        else if (s[2] == 'Z')
        {
            printf("%d\n", st.size());
        }
        else
        {
            for (set<int>::iterator it = st.begin(); it != st.end(); it++) // 使用迭代器进行遍历
            {
                printf("%d ", *it);
            }
            break;
        }
    }

    return 0;
}
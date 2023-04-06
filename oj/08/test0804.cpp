#include <iostream>
#include <cstring>
using namespace std;
char s[100005];
char s1[26];
int main()
{
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
        s1[(s[i] - 'a')]++;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        if (s1[s[i] - 'a'] == 1)
        {
            cout << s[i] << endl;
            return 0;
        }
    cout << "no" << endl;
    return 0;
}
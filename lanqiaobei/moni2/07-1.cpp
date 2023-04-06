#include <iostream>
using namespace std;
bool b[100];
int main()
{
    int n;
    scanf("%d", &n);
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                b[i] = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (!b[i])
        {
            cout << a[i] << '\n';
        }
    }
    
    return 0;
}
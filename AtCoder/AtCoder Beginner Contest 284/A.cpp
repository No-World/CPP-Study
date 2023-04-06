#include <iostream>
using namespace std;
int main()
{
    string a[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (n--)
    {
        cout << a[n] << endl;
    }
    
    return 0;
}
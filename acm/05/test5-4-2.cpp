#include <iostream>
using namespace std;

int main()
{
    string a;  
    int t = 0;
    cin >> a;
    a = a + ' ';
    for (int i = 1; i <= 100000; i++)
    {
        if ((a[i] == 'A' && a[i + 1] == 'A') || (a[i] == 'C' && a[i + 1] == 'C'))
        {
            a[i + 1] = '?';
            t++;
        }
//        if ((a[i] != 'A' || a[i] != 'C' || a[i] != '?'))
//            break;
    }
    cout << t;;
    return 0;
}
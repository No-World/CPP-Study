#include <iostream>
using namespace std;
int mul(int a, int b)
{
    return a * b;
}
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i << "*" << j << "=" << mul(i, j) << " ";
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
void hw()
{
    int j = 0;
    for (int i = 1000; i <= 2000; i++)
        if (i / 1000 % 10 == i % 10 && i / 10 % 10 == i / 100 % 10)
        {
            cout << i << " ";
            j++;
            if (j % 5 == 0)
                cout << endl;
        }
}
int main()
{
    hw();
    return 0;
}
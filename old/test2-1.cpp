#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float y=0.0;
    y=1.0 + 1.0 / ( 1.0 + ( 1.0 / ( 1.0 + 1.0 / 5.0 ) ) );
    cout << "y=" << y << endl;
    system("pause");
    return 0;
}
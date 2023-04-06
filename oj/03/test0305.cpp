#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int a1 , a2 , n ,an;
    cin >> a1 >> a2 >> n;
    printf("%d",( a2 - a1 )*( n - 1 )+ a1);

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if ( N > 0 )
    printf("positive");
    
    else if ( N == 0 )
    printf("zero");

    else
    printf("negative");

    return 0;
}
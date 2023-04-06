#include<iostream>
using namespace std;
int main()
{
    int m=0,sum=0;
    cin>>m;
    m=m+1;
    for (m>0;m=m-1;)
    {
        sum=sum+m;
    }
    cout<<sum;
    return 0;
}

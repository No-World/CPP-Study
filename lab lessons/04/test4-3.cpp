#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    cout << "������һ����λ����";
    string a;
    cin >> a ;
    cout << "��������Ľ��Ϊ��" << a[2]<<a[1]<<a[0]<<endl;
    cout << "��λ����������Ϊ��" << pow(a[0]-'0',3.0)+pow(a[1]-'0',3.0) +pow(a[2]-'0',3.0) ; 
    return 0;
}

#include<iostream>
using namespace std;   
int main() {   
int a = 40; 
int b = 4;
int c = 4;   
a = (b == c);   
cout << "( ǰ��� ) a = " << a << endl; 
a = a == (b = c);     
cout << "( �����ı��� ) a = " << a << endl;   
 return 0;
}     


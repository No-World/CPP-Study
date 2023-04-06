#include<iostream>
using namespace std;   
int main() {   
int a = 40; 
int b = 4;
int c = 4;   
a = (b == c);   
cout << "( 前面的 ) a = " << a << endl; 
a = a == (b = c);     
cout << "( 经过改变后的 ) a = " << a << endl;   
 return 0;
}     


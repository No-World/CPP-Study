#include<iostream>
using namespace std;   
int main() {   
int a = 0;   
int b = 0;   
int c = 0;   
a = b = 2;
c = 3;   
b = a++ - 1;     
cout << "(��һ��) a = " << a << ",b = " << b << endl;
 b  =  ++a - 1; cout << "(�ڶ���) a = " << a << ",b = " << b << endl; 
b  =  c-- + 1;   
cout << "(��ʱ��) b = " << b << ",��һ�Σ�c = " << c << endl;
 b  =  --c + 1;   
cout << "(��ʱ��) b = " << b << ",�ڶ���:c = " << c << endl;
return 0; 
}   
     


#include<iostream>
using namespace std;   
int main() {   
int a = 0;   
int b = 0;   
int c = 0;   
a = b = 2;
c = 3;   
b = a++ - 1;     
cout << "(第一次) a = " << a << ",b = " << b << endl;
 b  =  ++a - 1; cout << "(第二次) a = " << a << ",b = " << b << endl; 
b  =  c-- + 1;   
cout << "(这时的) b = " << b << ",第一次：c = " << c << endl;
 b  =  --c + 1;   
cout << "(这时的) b = " << b << ",第二次:c = " << c << endl;
return 0; 
}   
     


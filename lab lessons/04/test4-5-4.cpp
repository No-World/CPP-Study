#include <iostream>
using namespace std;
int main()  {   
int i = 0; 
int j = 0;
int m = 0;
int n = 0;
i = 8; j = 10;
m = ++i; n = j++;     
n = (++i) + (++j) + m;     
cout << i << '\t' << j << '\n';     
cout << m << '\t' << n << '\n';   
return 0;
}    

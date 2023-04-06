#include<iostream>
using namespace std;
const int MAX=20;
long long ji[MAX],ou[MAX];
int main(){
	int n;
	ji[1]=1,ou[1]=8;
	for(int i=2;i<MAX;i++){
		ji[i]=ou[i-1]+9*ji[i-1];
		ou[i]=ji[i-1]+9*ou[i-1];
	}
	ou[1]++;
	while(cin>>n)
		cout<<ji[n]<<" "<<ou[n]<<endl;
	return 0;
}
#include <cstdio> 
using namespace std;

int main()
{
    printf("浮点数12.345678987654321\n");
	printf("有效位保留10位：%10.8f\n",12.345678987654321);
	printf("小数位保留10位：%.10f\n",12.345678987654321);
	return 0; 
} 

#include <iostream>
using namespace std;

int main()
{
    cout << "AB’CD\\EFG”HI\n";

    char a1 , a2 , a3 , a4 , a5;
    cout << "输入字符：\n";
    cin.get(a1);
    cin.get(a2);
    cin.get(a3);
    cin.get(a4);
    cin.get(a5);
    cout << "输出结果为：";
    cout.put(a1);
    cout.put(a2);
    cout.put(a3);
    cout.put(a4);
    cout.put(a5);
    cout << "\n";

    int b1 = 333;
    float b2 = 23.4555;
    double b3 = 0.34567;
    char b4 = 'w';
    bool b5 = true;
    string b6 = "Hello" ;
    cout << "整型：" << b1 << "\n单精度：" << b2 << "\n双精度：" << b3 << "\n字符：" << b4 << "\n布尔型：" << b5 << "\n字符串：" << b6 << endl;

    double a , b , c;
    cout << "请输入a值：";
    cin >> a;
    cout << "请输入b值：";
    cin >> b;
    cout << "请输入c值：";
    cin >> c;
    cout << "表达式a+b-c的结果为：" << int( a + b - c ) << endl;

    char c1 = 'a';
    int c4 = 136;
    short c5;
    float c7;
    double c8;
    bool c9;
    cout << "字符‘a’所占字节数：" << sizeof(c1) << "\n字符串“a”所占字节数：" << sizeof("a") << "\n字符串“china”所占字节数：" << sizeof("china") << "\n整型数136所占字节数：" << sizeof(c4) << "\n短整型short所占字节数：" << sizeof(c5) << "\n浮点数12.3456所占字节数：" << sizeof(12.3456) << "\n单精度float所占字节数：" << sizeof(c7) << "\n双精度double所占字节数：" << sizeof(c8) << "\n布尔型bool所占字节数：" << sizeof(c9) <<endl;

    system("pause");
    return 0;
}
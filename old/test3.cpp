#include <iostream>
using namespace std;
int main()
{
    float note, notenumber, coat, coatnumber, bag, bagnumber, sum;
    cout << "请输入三等奖笔记本单价：";
    cin >> note;
    cout << "请输入三等奖奖项数量：";
    cin >> notenumber;
    cout << "请输入二等奖背心单价：";
    cin >> coat;
    cout << "请输入二等奖奖项数量：";
    cin >> coatnumber;
    cout << "请输入一等奖双肩包单价：";
    cin>>bag;
    cout << "请输入一等奖奖项数量：";
    cin >> bagnumber;
    sum = note * notenumber + coat * coatnumber + bag * bagnumber;
    cout<<"您需要筹集"<<sum<<"元"<<endl;
    system("pause");
    return 0;
}
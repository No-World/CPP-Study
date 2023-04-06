#include <iostream>
using namespace std;

double dis(double s)
{
    if (0 <= s && s < 250)
        return 0;
    else if (250 <= s && s < 500)
        return 0.02;
    else if (500 <= s && s < 1000)
        return 0.05;
    else if (1000 <= s && s < 2000)
        return 0.08;
    else if (2000 <= s && s < 3000)
        return 0.10;
    else
        return 0.15;
}
double money(double p, double w, double s)
{
    return p * w * s * (1 - dis(s));
}
int main()
{
    double p, w, s;
    cout << "请输入运费单价 货物重量 路程：";
    cin >> p >> w >> s;
    cout << "运费单价=" << p << " "
         << "货物重量=" << w << " "
         << "路程=" << s << " "
         << "折扣=" << dis(s) << endl;
    cout << "总运费=" << money(p, w, s);
    return 0;
}

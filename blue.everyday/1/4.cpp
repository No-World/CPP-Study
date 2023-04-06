#include <cstdio>
#include <iostream>
using namespace std;
string tg[] = {"jia", "yi", "bing", "ding", "wu", "ji", "geng", "xin", "ren", "gui"},
       dz[] = {"zi", "chou", "yin", "mao", "chen", "si", "wu", "wei", "shen", "you", "xu", "hai"};

int main()
{
    int n;
    scanf("%d", &n);
    cout << tg[(n % 10 + 6) % 10] << dz[(n % 12 + 8) % 12] << '\n';
    return 0;
}
#include <cstdio>
#include <fstream>
using namespace std;
char zm[60];
int main(int argc, char const *argv[])
{
    ofstream file("D:\\OneDrive - 8f5f87\\source\\repos\\C++ study\\blue.everyday\\1\\5.txt");
    file << "char map[][] = {";
    for (int i = 1; i <= 29; i++)
    {
        scanf("%s", zm + 1);
        file << "{";
        for (int i = 1; i < 50; i++)
        {
            file << '\'' << zm[i] << "\',";
        }
        file << '\'' << zm[50] << "\'},";
    }
    scanf("%s", zm + 1);
    file << "{";
    for (int i = 1; i < 50; i++)
    {
        file << '\'' << zm[i] << "\',";
    }
    file << '\'' << zm[50] << "\'}};";
    return 0;
}
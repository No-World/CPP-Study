#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    string name[1000];
    int qn[1000], bn[1000], lw[1000];
    char gb[1000], xb[1000];

    for (int i = 1; i <= n; i++)
    {
        scanf("%s %d %d %s %s %d", name[i].c_str(), &qn[i], &bn[i], gb[i], xb[i], lw[i]);
        printf("%s %d %d %s %s %d", name[i].c_str(), qn[i], bn[i], gb[i], xb[i], lw[i]);
    }

    return 0;
}
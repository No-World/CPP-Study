#include <cstdio>
using namespace std;
struct cj
{
    int id, yw, sx, yy, wl, hx, sw, zf;
};

int main()
{
    int n;
    double pyw, psx, pyy, pwl, phx, psw;
    struct cj a[80];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d%d%d%d%d%d", &a[i].id, &a[i].yw, &a[i].sx, &a[i].yy, &a[i].wl, &a[i].hx, &a[i].sw);
        pyw += a[i].yw;
        psx += a[i].sx;
        pyy += a[i].yy;
        pwl += a[i].wl;
        phx += a[i].hx;
        psw += a[i].sw;
        a[i].zf = a[i].yw + a[i].sx + a[i].yy + a[i].wl + a[i].hx + a[i].sw;
    }
    pyw /= n;
    psx /= n;
    pyy /= n;
    pwl /= n;
    phx /= n;
    psw /= n;
    for (int i = 1; i <= n; i++)
        printf("%d %d %d %d %d %d %d %d\n", a[i].id, a[i].yw, a[i].sx, a[i].yy, a[i].wl, a[i].hx, a[i].sw, a[i].zf);
    printf("%.1f %.1f %.1f %.1f %.1f %.1f", pyw, psx, pyy, pwl, phx, psw);

    return 0;
}
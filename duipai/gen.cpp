#include <bits/stdc++.h>
using namespace std;
mt19937_64 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
int random(int l, int r) {
    int f = r - l + 1;
    return rng() % f + l;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 1; i <= 1000; i++) cout << chrono::steady_clock::now().time_since_epoch().count() << ' ';
    return 0;
}
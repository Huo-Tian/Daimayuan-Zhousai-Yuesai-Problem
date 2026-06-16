#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int P = 998244353;
int n, q, c, d;
ll a[100010], b[100100];

int main() {
    cin >> n;
    ll f, g, h;
    f = g = h = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i] >> b[i];
        f += a[i] * b[i];
        g += a[i];
        h += b[i];
    }
    cin >> q;
    for(; q--; ) {
        cin >> c >> d;
        cout << (f + d * g + c * h + n * c * d) % P << endl;
    }
}
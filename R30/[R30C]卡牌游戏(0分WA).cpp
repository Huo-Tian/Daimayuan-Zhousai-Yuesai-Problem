#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll P = 998244353;
ll n, q, c, d;
ll a[100010], b[100100];

int main() {
    cin >> n;
    ll f, g, h;
    f = g = h = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i] >> b[i];
        f += a[i] * b[i] * 1LL;
        g += a[i] * 1LL;
        h += b[i] * 1LL;
        f %= P, g %= P, h %= P;
    }
    cin >> q;
    for(; q--; ) {
        cin >> c >> d;
        ll a1, a2, a3;
        a1 = d * g;
        a2 = c * h;
        a3 = n * c * d;
        //a1 %= P, a2 %= P, a3 %= P;
        cout << ((f + a1 + a2 + a3) % P * 1LL) << endl;
    }
}
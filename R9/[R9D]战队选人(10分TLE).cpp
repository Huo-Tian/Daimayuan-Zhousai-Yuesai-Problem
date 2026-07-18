#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int P = 998244353;
ll a, b, c, n, m;
ll ans = 0;

ll jc(ll x) {
    ll as = 1;
    for(ll i = 2; i <= x; i ++) {
        as *= i;
    }
    return as;
}

ll C(ll m, ll n) {
    ll jcn = jc(n), jcm = jc(m) * jc(n - m);
    if(jcn < 0 || jcm <= 0) return 1;
    return jcn / jcm;
}

int main(){
    scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &n, &m);
    for(int i = 0; i <= n; i ++) {
        for(int j = 0; j <= m; j ++) {
            if(n - i <= a && i + j <= b && m - j <= c) {
                ans += C((n - i) * 1LL, a) * C(i * 1LL, b) * C(j * 1LL, (b - i) * 1LL) * C((m - j) * 1LL, c);
                ans %= P;
            }
        }
    }
    cout << ans << endl;
}
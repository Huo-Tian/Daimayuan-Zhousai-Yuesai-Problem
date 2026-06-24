#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int P = 998244353;
int n, m;
ll f[101000];

ll jc(int x) {
    ll cnt = 1;
    for(int i = 2; i <= x; i ++) cnt *= i;
    return cnt;
}

ll zh(int n, int m) {
    ll b = jc(m) * jc(n - m);
    if(b == 0) return 1;
    return jc(n) / (jc(m) * jc(n - m));
}

int main() {
    cin >> n >> m;
    f[0] = 1;
    for(int i = 1; i <= n; i ++) {
        ll sum = 0;
        for(int k = 1; k <= min(i, m); k ++) {
            sum += f[i - k] * zh(m, k);
        }
        f[i] = sum;
    }
    cout << (jc(n) * f[n]) % P << endl;
}
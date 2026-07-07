#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, q;
ll a[200010], b[200010];
ll s[200010];

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i ++) {
        b[i] = abs(a[i] - a[i - 1]);
    }
    for(int i = 1; i <= n; i ++) {
        s[i] = s[i - 1] + b[i];
    }
    int l, r;
    for(; q--; ) {
        cin >> l >> r;
        if(l == r) {
            cout << 2 * (r - l + 1) + a[l] + a[r] << endl;
        } else {
            cout << (2 * (r - l + 1) + a[l] + a[r] + abs(s[r] - s[l])) << endl;
        }
    }
}
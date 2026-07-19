#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[200010], b[200010], c[200100];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    ll t = 0, p = 0;
    for(int i = 1; i <= n; i ++) {
        t += c[i];
    }
    for(int i = 1; i <= n; i ++) {
        if(a[i] == i) {
            p = max(p, (c[i] - b[i]) * 1ll);
        }
    }
    cout << t - p << endl;
}
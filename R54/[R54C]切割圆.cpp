#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef long long ll;

int n, a[400010];
int b[800010];
ll ans = 0, t[800010], s = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= 2 * n; i ++) {
        cin >> a[i];
        s += a[i];
        b[i] = a[i];
    }
    for(int i = n * 2 + 1; i <= 4 * n; i ++) {
        b[i] = a[i - 2 * n];
    }
    for(int i = 1; i <= 4 * n; i ++) {
        t[i] = t[i - 1] + b[i];
    }
    for(int i = 1; i <= 2 * n; i ++) {
        ll x = t[i + n - 1] - t[i - 1];
        ans = max(ans, x ^ (s - x));
    }
    cout << ans << endl;
}
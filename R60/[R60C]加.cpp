#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int a[100010];
ll s[100010];
ll ans = 0;

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
        ans = max(ans, a[i] * 1LL);
        s[i] = s[i - 1] + a[i];
    }
    if(n == 1) {
        cout << a[1] << endl;
        return 0;
    }
    for(int l = 1; l <= n; l ++) {
        for(int r = l; r <= n; r ++) {
            if(r - l <= m)
                ans = max(ans, s[r] - s[l - 1]);
        }
    }
    if(n >= 2 && m >= 1)
        ans = max(ans, 0 * 1LL);
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int P = 1e9 + 7;
ll a[1000010];
int n;
ll ans = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i ++) {
        ans += ((2 * i - n - 1) % P) * (a[i] * a[i] % P);
        ans %= P;
    }
    cout << ans % P << endl;
}
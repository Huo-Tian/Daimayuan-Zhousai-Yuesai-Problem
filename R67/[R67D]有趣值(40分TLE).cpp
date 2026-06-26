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
    for(int i = 1; i <= n; i ++)
        for(int j = i + 1; j <= n; j ++)
            ans += abs(a[i] - a[j]) * (a[i] + a[j]) * 1LL, ans %= P;
    cout << ans % P << endl;
}
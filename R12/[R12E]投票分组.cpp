#include <bits/stdc++.h>
using namespace std;
const int P = 998244353;
using ll = long long;

int n, k, a, x;
ll dp[110][10][910];

ll jc(ll x) {
    ll cnt = 1;
    for(int i = 2; i <= x; i ++)
        cnt *= i;
    return cnt;
}

ll zh(ll m, ll n) {
    ll nj, mj;
    nj = jc(n), mj = jc(m) * jc(n - m);
    return (nj == 0 || mj == 0 ? 1 : nj / mj * 1LL);
}

int main() {
    cin >> n >> k >> a >> x;
    dp[0][0][0] = 1;
    for(int i = 1; i <= n; i ++) 
        for(int j = 0; j <= min(i, x); j ++) 
            for(int s = 0; s <= min(a, i * k); s ++) 
                if(i * k - s <= n * k - a) 
                    for(int num = 0; num <= min(k, s); num ++) 
                        if(num > k / 2) {
                            if(j > 0) {
                                dp[i][j][s] += dp[i - 1][j - 1][s - num] * zh(num * 1LL, a - (s - num) * 1LL) * zh(k - num * 1LL, (n - i + 1) * k - (a - (s - num)) * 1LL) * 1LL;
                                dp[i][j][s] %= P;
                            }
                        } else {
                            dp[i][j][s] += dp[i - 1][j][s - num] * zh(num * 1LL, a - (s - num) * 1LL) * zh(k - num * 1LL, (n - i + 1) * k - (a - (s - num)) * 1LL) * 1LL;
                            dp[i][j][s] %= P;
                        }
    cout << dp[n][x][a] << endl;
}
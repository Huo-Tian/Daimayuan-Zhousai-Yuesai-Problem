#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
ll a[2010], b[2010];
ll dp[2010][1010][3][2];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i] >> b[i];
    }
    memset(dp, 128, sizeof(dp));
    dp[0][0][2][0] = 0;
    for(int i = 0; i <= n; i ++) {
        for(int j = 0; j <= m; j ++) {
            for(int k = 0; k <= 2; k ++) {
                for(int l = 0; l <= 1; l ++) {
                    if(l == 0) {
                        dp[i + 1][j + 1][k][1] = max(dp[i + 1][j + 1][k][1], dp[i][j][k][0]);
                    }
                    if(k != 0) {
                        dp[i + 1][j][0][0] = max(dp[i + 1][j][0][0], dp[i][j][k][l] + a[i + 1]);
                    }
                    if(k != 1) {
                        dp[i + 1][j][1][0] = max(dp[i + 1][j][1][0], dp[i][j][k][l] + b[i + 1]);
                    }
                }
            }
        }
    }
    ll ans = 0;
    for(int i = 0; i <= 2; i ++) {
        for(int j = 0; j <= 1; j ++) {
            ans = max(ans, dp[n][m][i][j]);
        }
    }
    cout << ans << endl;
}
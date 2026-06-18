#include <bits/stdc++.h>
using namespace std;

const int P = 998244353;
int n, m;
int d[2010];
int dp[2010][2010];
int sum = 0;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= m; i ++) {
        cin >> d[i];
        sum += d[i];
    }
    if(sum != n - 1) {
        for(int i = 0; i < n; i ++) {
            cout << 0 << " ";
        }
        return 0;
    }
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for(int i = 1; i <= m; i ++) {
        for(int j = 0; j <= n; j ++) {
            if(j < d[i]) dp[i][j] = dp[i - 1][j] % P;
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j] + dp[i - 1][j - d[i]]) % P;
        }
    }
    for(int i = 0; i < n; i ++) {
        cout << dp[m][i] << " ";
    }
}
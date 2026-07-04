#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1100][1100];
int ma[1100], mi[1100];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        ma[i] = INT_MIN, mi[i] = INT_MAX;
        for(int j = 1; j <= m; j ++) {
            cin >> a[i][j];
            ma[i] = max(ma[i], a[i][j]);
            mi[i] = min(mi[i], a[i][j]);
        }
    }
    int ans = INT_MAX;
    for(int i = 1; i <= n; i ++) {
        ans = min(ans, ma[i] - mi[i]);
    }
    cout << ans << endl;
}
//9分钟AK
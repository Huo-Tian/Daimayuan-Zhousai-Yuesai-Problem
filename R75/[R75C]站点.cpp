#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, q;
int w[200010];
int l, r;

int main() {
    cin >> n >> q;
    for(int i = 1; i < n; i ++)
        cin >> w[i];
    int best_td = 0;
    ll ans = INT_MAX;
    for(int i = 1; i < n; i ++) {
        ll answer = 0;
        best_td = i;
        for(int j = 1; j <= q; j ++) {
            cin >> l >> r;
            for(int k = l; k < r; k ++) {
                if(k != best_td)
                    answer += w[k];
            }
        }
        ans = min(ans, answer);
    }
    cout << ans << endl;
}
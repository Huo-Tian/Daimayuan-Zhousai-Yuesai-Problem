#include <bits/stdc++.h>
using namespace std;

int c[200010];
int n, q;
int s[200010];
int w[200010];

int main() {
    cin >> n >> q;
    for(int i = 1; i < n; i ++) {
        cin >> w[i];
    }
    for(; q--; ) {
        int l, r;
        cin >> l >> r;
        c[l] ++, c[r] --;
    }
    int ans = 0, ma = INT_MIN;
    for(int i = 1; i < n; i ++) {
        s[i] = s[i - 1] + c[i];
        ans += w[i] * c[i];
        ma = max(ma, w[i] * c[i]);
    }
    cout << ans - ma << endl; 
}
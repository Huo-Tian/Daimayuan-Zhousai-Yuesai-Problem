#include <bits/stdc++.h>
using namespace std;

int n, k, s, cnts = 0;
int a[200010];
map<int, int> b;
int ans = 0, ma = 0;

int main() {
    cin >> n >> k >> s;
    cnts = s;
    memset(a, 0, sizeof(a));
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        ma = max(ma, a[i]);
        b[a[i]] ++;
    }
    for(int s = 1; s <= k; s ++) {
        int t = s;
        for(int i = 1; i <= n; i ++) {
            if(b[t] >= 1) {
                b[t] --;
                t ++;
            } else {
                break;
            }
        }
        ans = max(ans, t - s + 1);
    }
    cout << ans << endl;
}
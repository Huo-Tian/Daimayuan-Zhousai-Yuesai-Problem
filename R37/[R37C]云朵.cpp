#include <bits/stdc++.h>
using namespace std;
#define MAXN 200010
using ll = long long;
const int inf = 1e9;

int n, a[MAXN];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    vector<int> premin(n + 1, inf), premax(n + 2), backmin(n + 2, inf), backmax(n + 2);
    for(int i = 1; i <= n; i ++) {
        premin[i] = min(premin[i - 1], a[i]);
        premax[i] = max(premax[i - 1], a[i]);
    }
    for(int i = n; i >= 1; i --) {
        backmax[i] = max(backmax[i + 1], a[i]);
        backmin[i] = min(backmin[i + 1], a[i]);
    }
    int ans = 2e9;
    for(int i = 1; i < n; i ++) {
        vector<int> c = {premin[i] + i, premax[i] + i, backmax[i + 1], backmin[i + 1]};
        sort(c.begin(), c.end());
        ans = min(ans, c.back() - c[0]);
    }
    cout << ans << endl;
}
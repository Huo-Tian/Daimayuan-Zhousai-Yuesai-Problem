#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int c[200100], w[200100];
vector<int> a[200010];
ll ans = 0;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> c[i] >> w[i];
        a[c[i]].push_back(w[i]);
    }
    for(int i = 1; i <= n; i ++) {
        sort(a[i].begin(), a[i].end(), cmp);
    }
    for(int i = 1; i <= n; i ++) {
        if(a[i].size() >= 1)
            ans += a[i][0] * 1LL;
    }
    cout << ans << endl;
}
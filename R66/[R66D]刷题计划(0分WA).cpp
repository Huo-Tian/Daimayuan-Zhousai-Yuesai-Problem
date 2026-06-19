#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
pair<int, bool> b[2010], c[2010];
int wh[2010], t = 0;
ll ans = 0;
bool v[2010];

inline void dfs(int x) {
    if(x == n - m + 1) {
        bool flag = true;
        for(int i = 2; i <= n; i ++) {
            if(!wh[i - 1] && !wh[i]) flag = false;
        }
        if(flag) {
            ll sum = 0;
            for(int i = 1; i < n - m && flag; i ++) {
                if(c[i].second == c[i + 1].second) {
                    flag = false;
                }
            }
            if(flag) {
                for(int i = 1; i <= n - m; i ++){ 
                    sum += c[i].first;
                }
                ans = max(ans, sum);
            }
        }
        return;
    }
    int re_i = 1;
    for(int i = t; i <= n; i ++) {
        if(!v[i]) {
            re_i = i;
            v[i] = true;
            t = i;
            c[x].first = b[i].first, c[x].second = b[i].second;
            wh[i] = 1;
            dfs(x + 1);
            t = re_i;
            v[i] = false;
            wh[i] = 0;
            c[x].first = 0;
            c[x].second = false;
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        int first, second;
        cin >> first >> second;
        if(first > second) b[i].first = first, b[i].second = false;
        else b[i].first = second, b[i].second = true;
    }
    dfs(1);
    cout << ans << endl;
}
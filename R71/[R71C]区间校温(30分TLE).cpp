#include <bits/stdc++.h>
using namespace std;

int n, a[100010];
int dis[100100], d[100100];

int main() {
    cin >> n; 
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int ans = 0;
    for(int l = 1; l <= n; l ++) {
        for(int r = 1; r <= n; r ++) {
            for(int i = l; i <= r; i ++) {
                dis[i] = a[i] + 1;
            }
            int cnt = 0;
            for(int i = 2; i <= n; i ++) {
                cnt += (dis[i] == dis[i - 1] ? 1 : 0);
            }
            ans = max(cnt, ans);
        }
    }
    cout << ans << endl;
}
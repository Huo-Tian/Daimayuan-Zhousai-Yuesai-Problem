#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
struct Food {
    ll p, d, t;
    ll v = 0;
} a[200010];
ll b[200010];
ll c[200010];

int main() {   
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i].p >> a[i].d >> a[i].t;
        a[i].v = 0;
        if(a[i].t == 0){
            b[1] += a[i].d;
            continue;
        }
        b[1] += a[i].p;
        b[a[i].t + 1] -= a[i].p;
        b[a[i].t + 1] += a[i].d;
    }
    for(int i = 1; i <= m; i ++) {
        c[i] = c[i - 1] + b[i];
    }
    for(int i = 1; i <= m; i ++) {
        cout << c[i] << " ";
    }
}
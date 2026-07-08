#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t;
int n, a[100010], b[100100];

bool check(ll x) {
    for(int i = 1; i <= n; i ++) {
        if(x < a[i]) {
            return false;
        } else {
            ll ax = min(x - a[i], b[i] * 1LL);
            x = (x - a[i] + ax) * 1LL;
        }
    }
    return true;
}

int main() {
    cin >> t;
    for(; t--; ) {
        cin >> n;
        ll sum = 0;
        for(int i = 1; i <= n; i ++) {
            cin >> a[i];
            sum += a[i] * 1LL;
        }
        for(int i = 1; i <= n; i ++) {
            cin >> b[i];
        }
        cout << sum << endl;
        ll L = 0, R = sum + 1;
        while(L + 1 < R) {
            ll M = (L + R) / 2;
            if(check(M)) {
                R = M;
            } else {
                L = M;
            }
        }
        cout << L << endl; 
    }
}
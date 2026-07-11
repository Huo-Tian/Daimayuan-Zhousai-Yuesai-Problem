#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
string s;
ll ans = 0, lj = 0;

int main() {
    cin >> n;
    cin >> s;
    ll x = 0;
    for(int i = 0; i < n; i ++) {
        if(s[i] == 'P') {
            ans += 300 + x;
            x ++;
        } else if(s[i] == 'G'){
            ans += 100 + x;
            x ++;
        } else {
            lj = max(lj, x);
            x = 0;
        }
    }
    lj = max(lj, x);
    x = 0;
    cout << ans << " " << lj << endl;
}
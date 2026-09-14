#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll k;
string s;

int main() {
    cin >> n >> k;
    cin >> s;
    int ans = 0;
    string t = s.substr((k % n), n - (k % n) + 1) + s.substr(0, (k % n));
    for(int i = 0; i < n; i ++) {
        if(s[i] == t[i])
            ans ++;
    }
    cout << ans << endl;
}
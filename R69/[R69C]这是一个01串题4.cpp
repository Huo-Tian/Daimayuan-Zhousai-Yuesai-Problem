#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, t = 0, cnt = 0;
string s;

int main() {
    cin >> n >> k;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < n; i ++) {
        if(s[i] == '0') {
            cnt ++;
        }
        if(s[i] == '1') {
            ans += cnt;
        }
        if(i == t + k) {
            if(s[i - k] == '0') {
                cnt --;
            }
            t ++;
        }
    }
    cout << ans << endl;
}
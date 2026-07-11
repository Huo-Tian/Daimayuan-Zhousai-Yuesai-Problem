#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

int main() {
    cin >> n >> k;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < n; i ++) {
        for(int j = i + 1; j < n; j ++) {
            if((s[i] == '0' && s[j] == '1') && (j - i <= k)) {
                ans ++;
            }
        }
    }
    cout << ans << endl;
}
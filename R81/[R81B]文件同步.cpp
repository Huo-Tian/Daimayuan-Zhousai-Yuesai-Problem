#include <bits/stdc++.h>
using namespace std;

int n;
string s;
string t;

int main() {
    cin >> n;
    cin >> s >> t;
    int ans = 0;
    for(int i = 0; i < s.size(); i ++) {
        if(t[i] == 1 && s[i] == 0) {
            ans ++;
        }
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int n, k, x;
string s;

int main() {
    cin >> n >> k >> x;
    cin >> s;
    s += s;
    int ans = 0;
    for(int i = 0; i < 2 * n - k; i ++) {
        string t = s.substr(i, k);
        int sum = 0;
        for(int j = 0; j < t.size(); j ++) {
            sum = (t[j] == '#' ? sum + 1 : sum);
        }
        if(sum == x)
            ans ++;
    }
    cout << ans << endl;
}
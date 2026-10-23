#include <bits/stdc++.h>
using namespace std;

int n, a, c;
bool b[200010];
int ans = 0;

int main() {
    cin >> n >> a >> c;
    for(int i = 1; i <= a; i ++) {
        b[i] = true;
    }
    for(int j = n; j >= n - c; j --) {
        b[j] = (b[j] == true ? false : true);
    }
    for(int i = 1; i <= n; i ++) {
        if(b[i] == true) {
            ans ++;
        }
    }
    cout << ans << endl;
}
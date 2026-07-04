#include <bits/stdc++.h>
using namespace std;

int n, a[1000100];

int main() {
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        ans = (a[i] % 2 == 0 ? ans + a[i] : ans);
    }
    cout << ans << endl;
}
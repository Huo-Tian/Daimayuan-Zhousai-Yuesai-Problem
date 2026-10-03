#include <bits/stdc++.h>
using namespace std;

int n, a[1000100];
int c[1000010], ans;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        c[a[i]] ++;
    }
    for(int i = 1; i <= 1000000; i ++){
        ans = max(c[i], ans);
    }
    cout << ans << endl;
}
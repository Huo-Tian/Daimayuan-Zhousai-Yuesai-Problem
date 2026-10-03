#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    int ans = 0;
    for(int i = 3; i <= n; i += 3) {
        ans += i;
    }
    cout << ans << endl;
}
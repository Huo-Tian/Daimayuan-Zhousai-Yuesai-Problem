#include <bits/stdc++.h>
using namespace std;

int t;
int n;

void solve() {
    cin >> n;
    if(n == 1)
        cout << 1 << endl;
    else {
        cout << n * n * n - (n - 2) * (n - 2) * (n - 2) << endl;
    }
}

int main() {
    cin >> t;
    for(; t--; )
        solve();
}
#include <bits/stdc++.h>
using namespace std;

int t, n, a[200100];

void solve() {
    cin >> n;
    int e, o, em, om;
    memset(a, -1, sizeof(a));   
    //em:e_memory, om:o_memory
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    if(n == 1) {
        cout << 0 << endl;
        return;
    }
    em = a[1], om = a[2];
    for(int i = 3, j = 4; i <= n && j <= n; i += 2, j += 2) {  
        if(a[i] != -1 && )
    }

}

int main() {
    cin >> t;
    for(; t--; ) {
        solve();
    }
}
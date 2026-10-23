#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, s;

int main() {
    cin >> n >> s;
    ll act = (1LL + n * 1LL) * n * 1LL / 2LL;
    for(int i = 1; i <= n; i ++) {
        if(act - i * 1LL == s * 1LL) {
            cout << i << endl;
            return 0;
        }
    }
}
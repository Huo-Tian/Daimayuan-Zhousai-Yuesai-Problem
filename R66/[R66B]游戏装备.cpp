#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int P = 998244353;
int n, x;
char op;
ll ans = 0;

int main() {
    cin >> n;
    for(; n --; ) {
        cin >> op >> x;
        if(op == 'A') ans += x;
        else if(op == 'B') ans *= x;
        ans %= P;
        cout << ans << endl;
    }
}
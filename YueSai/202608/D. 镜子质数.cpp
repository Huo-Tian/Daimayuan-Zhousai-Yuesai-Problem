#include <bits/stdc++.h>
using namespace std;

int n, n1, h1;
int ans = 0;

bool check(int x) {
    for(int i = 2; i * i <= x; i ++) {
        if(x % i == 0)
            return false;
    }
    return true;
}

int main() {
    cin >> n;
    for(int i = 2; i <= n; i ++) {
        n1 = i;
        h1 = 0;
        while(n1 > 0) {
            h1 = h1 * 10 + n1 % 10;
            n1 /= 10;
        }
        if(check(i) && check(h1)){
                ans ++;
        }
    }
    cout << ans << endl;
}
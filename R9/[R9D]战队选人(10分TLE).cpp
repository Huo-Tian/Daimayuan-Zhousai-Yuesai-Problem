#include <bits/stdc++.h>
using namespace std;

const int P = 998244353;

int a, b, c, n, m;

int ans = 0;

int jc(int x) {
    int as = 1;
    for(int i = 1; i <= x; i ++) {
        as *= i;
    }
    return as;
}

int C(int m, int n) {
    if(m > n) {
        swap(m, n);
    }
    return (n - m != 0 ? jc(n) / (jc(m) * jc(n - m)) : jc(n) / (jc(m)));
}

int main(){
    scanf("%d%d%d%d%d", &a, &b, &c, &n, &m);
    for(int i = 0; i <= n; i ++) {
        for(int j = 0; j <= m; j ++) {
            if(n - i <= a && i + j <= b && m - j <= c) {
                ans += C(n - i, a) * C(i, b) * C(j, b - i) * C(m - j, c);
                ans %= P;
            }
        }
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, q;
int a[100010], l, r;
ll s[100010], p[100100];

int main() {
    cin >> n >> q;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
        p[i] = p[i - 1] + a[i] * a[i];
    }
    //弃坑
}
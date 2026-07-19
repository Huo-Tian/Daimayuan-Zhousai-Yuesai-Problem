#include <bits/stdc++.h>
using namespace std;

int n, m, k, x;
int fd[100010], z[100100];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    cin >> n >> m >> k >> x;
    for(int i = 1; i <= n; i ++) {
        int l, r, a;
        cin >> l >> r >> a;
        z[l] += a, z[r + 1] -= a;
    }
    for(int i = 1; i <= n; i ++) {
        fd[i] = fd[i - 1] + z[i];
    }
    sort(fd + 1, fd + n + 1, cmp);
    if(fd[k] > x)
        cout << -1 << endl;
    else 
        cout << x - fd[k] << endl;
}
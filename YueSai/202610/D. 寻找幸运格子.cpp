#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[2010][2010];
int ans = 0;

bool check(int x, int y) {
    int ma = a[x][y], mi = a[x][y];
    for(int i = 1; i <= m; i ++) {
        if(a[x][i] > ma) {
            return false;
        }
    }
    for(int i = 1; i <= n; i ++) {
        if(a[i][y] < mi) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            if(check(i, j)) {
                ans ++;
            }
        }
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int a[1010][1010];
int n, m, k;

int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> a[i][j];
        }
    }
    for(; k --; ) {
        int x, y;
        cin >> x >> y;
        swap(a[(x % 3 == 0 ? x / 3 : x / 3 + 1)][(x % 3 == 0 ? m : x % 3)], a[(y % 3 == 0 ? y / 3 : y / 3 + 1)][(y % 3 == 0 ? m : y % 3)]);
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
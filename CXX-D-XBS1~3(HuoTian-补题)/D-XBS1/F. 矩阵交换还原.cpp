#include <bits/stdc++.h>
using namespace std;
const int N = 5010;

int a[N][N];
int n, m, k;
int x[100010], y[100010];

int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= k; i ++) {
        cin >> x[i] >> y[i];
    }
    for(int i = k; i; i --) {
        swap(a[(x[i] % 3 == 0 ? x[i] / 3 : x[i] / 3 + 1)][(x[i] % 3 == 0 ? m : x[i] % 3)], a[(y[i] % 3 == 0 ? y[i] / 3 : y[i] / 3 + 1)][(y[i] % 3 == 0 ? m : y[i] % 3)]);
    }
    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
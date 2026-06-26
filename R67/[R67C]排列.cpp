#include <bits/stdc++.h>
using namespace std;

int n;
int a[5010][5010], p[5010];
int x, y;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> p[i];
        a[1][i] = p[i];
    }
    cin >> x >> y;
    for(int i = 2; i <= 5000; i ++) {
        for(int j = 1; j <= n; j ++) {
            a[i][j] = a[i - 1][p[j]];
        }
    }
    for(int i = 1; i <= n; i ++) {
        if(a[x][i] != a[y][i])
            if(a[x][i] < a[y][i]) {
                cout << "<";
                return 0;
            } else {
                cout << ">";
                return 0;
            }
    }
    cout << "=" << endl;
}
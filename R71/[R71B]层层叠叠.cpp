#include <bits/stdc++.h>
using namespace std;

int n, m;
char t[2010][2010];

int main() {
    cin >> n;
    m = 2 * n - 1;
    for(int i = 1; i <= m; i ++) {
        for(int j = 1; j <= m; j ++) 
            cin >> t[i][j];
    }
    bool flag = true;
    int x = 1;
    for(int i = 1; i <= n && flag; i ++) {
        char standard = t[i][x];
        for(int j = x; j <= m - x + 1 && flag; j ++) {
            if(t[x][j] != standard) {
                flag = false;
            }
        }
        for(int j = x; j <= m - x + 1 && flag; j ++) {
            if(t[m - x + 1][j] != standard) {
                flag = false;
            }
        }
        for(int j = x; j <= m - x + 1 && flag; j ++) {
            if(t[j][x] != standard) {
                flag = false;
            }
        }
        for(int j = x; j <= m - x + 1 && flag; j ++) {
            if(t[j][(m) - x + 1] != standard) {
                flag = false;
            }
        }
        x ++;
    }
    if(flag) {
        cout << "Yes\n";
        for(int i = 1; i <= n; i ++) {
            cout << t[n][i];
        }
    } else {
        cout << "No\n";
    }
}
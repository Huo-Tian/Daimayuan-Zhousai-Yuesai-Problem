#include <bits/stdc++.h>
using namespace std;

int n, m;
int h[202608], hcnt = 0;
int l[202608], lcnt = 0;
int ans = INT_MIN, ansx, ansy;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= m; i ++) {
        int opt, k;
        cin >> opt >> k;
        if(opt == 1) {
            h[k] ++;
        } else {
            l[k] ++;
        }
    }
    for(int x = 1; x <= n - 2; x ++) {
        for(int y = 1; y <= n - 2; y ++) {
            int sum = 0;
            for(int i = x; i <= x + 2; i ++) {
                sum += h[i];
            }
            for(int j = y; j <= y + 2; j ++) {
                sum += l[j];
            }
            if(sum > ans) {
                ans = sum;
                ansx = x;
                ansy = y;
            }
        }
    }
    cout << ansx << " " << ansy << endl;
}
/*
封存一个O(n^3)：
#include <bits/stdc++.h>
using namespace std;

int n, a[10010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int ans = 0;
    //sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i ++) {
        for (int j = i + 1; j <= n; j ++) {
            int ma = 0, cma = 0;
            for (int k = i; k <= j; k ++) {
                if (a[k] >= ma) {
                    cma = ma;
                    ma = a[k];
                } else if (a[k] >= cma) {
                    cma = a[k];
                }
            }
            ans = max(ans, ma - cma);
        }
    }
    cout << ans << endl;
}*/
#include <bits/stdc++.h>
using namespace std;

int n, a[10010];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    int ans = 0;
    //sort(a + 1, a + n + 1);
    for (int i = 1; i < n; i ++) {
        ans = max(ans, abs(a[i] - a[i + 1]));
    }
    cout << ans << endl;
}
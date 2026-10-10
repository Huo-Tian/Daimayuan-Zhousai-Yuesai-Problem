#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[200010];
int b[200010];
int c[200010];
int e[200100];
int ans = 0;

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
    for(int i = 1; i <= n; i ++)
        cin >> b[i];
    for(int d = 1; d <= m; d ++) {
        for(int i = 1; i <= n; i ++)
            c[a[i] / d] ++;
        for(int i = 1; i <= n; i ++)
            e[b[i]] ++;
        bool flag = true;
        for(int i = 1; i <= n; i ++)
            if(e[i] != c[i]){
                flag = false;
                break;
            }
        ans += (flag ? 1 : 0);
    }
    cout << ans << endl;
}
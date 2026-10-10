#include <bits/stdc++.h>
using namespace std;

int n, w;
int a[200100];

int main() {
    cin >> n >> w;
    for(int i = 1; i <= n; i ++)
        cin >> a[i];
    int ans, diff;
    diff = INT_MAX, ans = 0;
    for(int i = 1; i <= n; i ++)
        for(int j = 1; j <= n; j ++) {
            if(i != j) {
                if(abs(a[i] + a[j] - w) < diff){
                    ans = (ans == a[i] + a[j] ? min(ans, a[i] + a[j]) : a[i] + a[j]), diff = abs(a[i] + a[j] - w);
                }
            }
        }
    cout << ans << endl;
}
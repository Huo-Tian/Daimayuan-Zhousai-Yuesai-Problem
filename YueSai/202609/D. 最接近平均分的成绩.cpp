#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
ll a[200010];
ll sum = 0;
ll ans = 0, anst = INT_MAX;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> a[i];
        sum += a[i];
    }
    sum /= n;
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i ++) {
        if(max(sum, a[i]) - min(sum, a[i]) < anst) {
            anst = max(sum, a[i]) - min(sum, a[i]);
            ans = a[i];
        } else if(max(sum, a[i]) - min(sum, a[i]) == anst) {
            ans = min(ans, a[i]);
        }
    }
    cout << ans << endl;
}
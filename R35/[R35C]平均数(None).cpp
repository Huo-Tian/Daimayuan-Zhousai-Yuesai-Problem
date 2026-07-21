#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[200010];
int b[20001000];
ll ans = 0, t = 0;

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
        b[a[i]]++;
        t += a[i];
	}
    sort(a + 1, a + n + 1);
	for(int i = 1; i <= n; i ++) {
        int x = (a[i] - t) % n;
        ans += b[x];
    }
    cout << ans << endl;
}
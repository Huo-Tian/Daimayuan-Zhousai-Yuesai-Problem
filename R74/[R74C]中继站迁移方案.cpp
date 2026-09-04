#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, k;
ll a[2100], c[2010];
bool b[2010];
ll ans = 0;

bool check() {
    sort(c + 1, c + n + 1);
	for(ll i = 1; i < n; i ++) {
		if(abs(c[i + 1] - c[i]) > k) {
			return false;
		}
	}
	return true;
}

int main() {
	cin >> n >> k;
    memset(a, 0, sizeof(a));
    memset(c, 0, sizeof(c));
    memset(b, false, sizeof(b));
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
		c[i] = a[i];
		b[a[i]] = true;
	}
	for(int i = 2; i < n; i ++) {
		for(ll x = a[1] + 1; x < a[n]; x ++) {
			c[i] = x;
			if(b[x] == false && check()) {
				ans ++;
			}
            copy(a + 1, a + n + 1, c + 1);
		}
	}
	cout << ans << endl;
}
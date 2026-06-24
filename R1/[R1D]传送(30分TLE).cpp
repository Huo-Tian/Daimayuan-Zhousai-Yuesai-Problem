#include <bits/stdc++.h>
using namespace std;

int n, q, a[200010];

int main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		cin >> a[i]; 
	}
	cin >> q;
	for(; q--; ) {
		int x, y, wezi;
		cin >> x >> y;
        wezi = x;
        //cout << x << y;
		for(int i = 1; i <= y; i ++) {
	        wezi = a[wezi];
		}
		cout << wezi << endl;
	}
}